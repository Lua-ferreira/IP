using System;
using System.Drawing;
using System.Windows.Forms;

class CinemaForm : Form
{
    private Button[,] seats;
    private Button[,] tela;
    private string[,] seatTypes; // VIP, Preferencial, Normal
    private bool[,] seatAvailability; // Disponível ou Ocupado

    public CinemaForm()
    {
        // Configurações da Janela
        this.Text = "CineLua - Escolha seu Assento";
        this.Size = new Size(1200, 900);

        tela = new Button[1, 1];

        // Inicializa os assentos
        int rows = 15;
        int cols = 20;
        seats = new Button[rows, cols];
        seatTypes = new string[rows, cols];
        seatAvailability = new bool[rows, cols];

        tela[0,0] = new Button();
        tela[0,0].Size = new Size(120, 40);
        tela[0,0].Location = new Point(30, 10);
        tela[0,0].BackColor = Color.Black;

        // Define os tipos de assento e a disponibilidade
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                seatTypes[i, j] = (i < 1) ? "VIP" : (i == rows - 1) ? "Preferencial" : "Normal";
                seatAvailability[i, j] = true; // Todos começam disponíveis

                // Cria o botão para o assento
                seats[i, j] = new Button();
                seats[i, j].Size = new Size(40, 40);
                seats[i, j].Location = new Point(30 + j * 50, 30 + i * 50);
                seats[i, j].Text = $"{(char)('A' + i)}{j + 1}";
                seats[i, j].BackColor = Color.LightGreen; // Disponível

                // Adiciona evento de clique
                int row = i, col = j; // Captura as variáveis para o evento
                seats[i, j].Click += (sender, e) => ReserveSeat(row, col);

                this.Controls.Add(seats[i, j]);
            }
        }
    }

    private void ReserveSeat(int row, int col)
    {
        if (seatAvailability[row, col])
        {
            seatAvailability[row, col] = false; // Marca como ocupado
            seats[row, col].BackColor = Color.Red; // Assento ocupado
            MessageBox.Show($"Assento {seatTypes[row, col]} ({row}, {col}) reservado com sucesso!");
        }
        else
        {
            MessageBox.Show($"Assento {seatTypes[row, col]} ({row}, {col}) já está ocupado!");
        }
    }

    [STAThread]
    static void Main()
    {
        Application.EnableVisualStyles();
        Application.Run(new CinemaForm());
    }
}
