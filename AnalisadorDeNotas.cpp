 #include <iostream>

int main() {   
 using text_t = std::string;
   
    int PrimeiroBimestre;
    int SegundoBimestre;
    int TerceiroBimestre;
    int QuartoBimestre;
    int Final;

  std::cout << "Adicione a nota do primeiro bimestre: ";
    if (!(std::cin >> PrimeiroBimestre)) {
        std::cout << "Por favor, insira apenas numeros." << std::endl;
        std::cin.clear();            // Limpa o estado de erro
        std::cin.ignore(10000, '\n'); // Limpa o buffer de entrada
        return 1; // Sai do programa com código de erro
    }

    std::cout << "agora a nota do segundo bimestre ";
   if (!(std::cin >> SegundoBimestre)) {
        std::cout << "Por favor, insira apenas numeros." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n'); 
        return 1;
    }
  std::cout << "agora a nota do terceiro bimestre ";
  if (!(std::cin >> TerceiroBimestre)) {
        std::cout << "Por favor, insira apenas numeros." << std::endl;
        std::cin.clear();           
        std::cin.ignore(10000, '\n'); 
        return 1; 
    }
   
std::cout << "agora a nota do quarto bimestre ";
   if (!(std::cin >> QuartoBimestre)) {
        std::cout << "Por favor, insira apenas numeros." << std::endl;
        std::cin.clear();            
        std::cin.ignore(10000, '\n'); 
        return 1; 
    }
  Final = PrimeiroBimestre + SegundoBimestre + TerceiroBimestre + QuartoBimestre;

   if(Final <= 15){
  std::cout << "Reprovado com " << Final << " pontos";
  
   } else if( Final >= 20){
      std::cout << "Aprovado com " << Final << " pontos";
         } else if ( Final >= 16){
          std::cout << "recuperacao com " << Final << " pontos";
         } 
    return 0;
    }
   
