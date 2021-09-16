using System; 


class URI {

    static void Main(string[] args) { 

          int idade, dia, mes, ano;

            idade = Convert.ToInt32(Console.ReadLine());

            ano = idade/365;
            mes = (idade%365)/30;
            dia = (idade%365)%30;

            Console.Write("{0} ano(s)\n", ano);
            Console.Write("{0} mes(es)\n", mes);
            Console.Write("{0} dia(s)\n", dia);


    }

}
