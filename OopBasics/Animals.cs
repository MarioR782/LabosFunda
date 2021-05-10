using System;

namespace OopBasics
{
    class Animals
    {
        //Atributos
            public string nameOfAnimal, classOfAnimal;
            public string spaceOfAnimal;
            public int? ageOfAnimal = null;
            public char genusOfAnimal;
        public Animals(string nameOfAnimal, string spaceOfAnimal, string classOfAnimal, int ageOfAnimal, char genusOfAnimal)
        {
            this.nameOfAnimal = nameOfAnimal;
            this.spaceOfAnimal =  spaceOfAnimal;
            this.classOfAnimal = classOfAnimal;
            this.ageOfAnimal = ageOfAnimal;
            this.genusOfAnimal = genusOfAnimal;
        }
        public void Walk(string location1, string location2)
        {
            Console.WriteLine($"\n{nameOfAnimal} camina desde {location1} hasta {location2}");
        }
        public void Eat(string comida)
        {
            Console.WriteLine($"\n{nameOfAnimal} come {comida}.");
        }
        public void bañarse(int tiempo)
        {
            Console.WriteLine($"\n{nameOfAnimal} se baña {tiempo} horas.");
        }
    }
}