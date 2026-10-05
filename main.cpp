#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

float calculo_media(float n1,float n2,float n3){
    
    return (n1+ n2 + n3)/3.0;
    
}

int main(){
    
    int qtd;
    int cont = 0;
    
    cout << "Quantos alunos você cadastrará? ";
    cout << endl;
    cout << "OBS: Você pode cadastrar até 5 alunos.";
    cout << endl;
    
    cin >> qtd;
    
    while(qtd < 1 || qtd > 5){
        
        cout << "Quantidade de alunos informada a ser cadastrada não válida, por favor tente novamente: ";
    
        cin >> qtd;
        
        cout << endl;
    
    }
    
    vector<string> nomes(qtd);
    vector<float> nota1(qtd);
    vector<float> nota2(qtd);
    vector<float> nota3(qtd);
    vector<float> media_aluno(qtd);
    vector<string> situacao(qtd);
    
    while(cont < qtd){
        
        cout << "Informe o nome do(a) " << cont + 1 << "º aluno(a):";
        
        cin >> nomes[cont];
        
        cout << "Informe a primeira nota do(a) " << nomes[cont] << ":";
        
        cin >> nota1[cont];
        
        cout << "Informe a segunda nota do(a) " << nomes[cont] << ":";
        
        cin >> nota2[cont];
        
        cout << "Informe terceira nota do(a) " << nomes[cont] << ":";
        
        cin >> nota3[cont];
        
        cout << endl;
        
        media_aluno[cont] = calculo_media(nota1[cont],nota2[cont],nota3[cont]);
        
        if(media_aluno[cont] >= 7){
            situacao[cont] = "Aprovado";
        }
        else{
            situacao[cont] = "Reprovado";
        }
        
        cont ++;
        
    }
    
    cout << left << setw(15) << "Aluno"
         << left << setw(10) << "Nota 1"
         << left << setw(10) << "Nota 2"
         << left << setw(10) << "Nota 3"
         << left << setw(10) << "Média"
         << left << setw(15) << "Situação";
    
    cout << endl << endl;
    
    for(int i = 0; i < qtd; i++){
        
        cout << fixed << setprecision(2);
        
        cout << left << setw(15) << nomes[i]
             << left << setw(10) << nota1[i]
             << left << setw(10) << nota2[i]
             << left << setw(10) << nota3[i]
             << left << setw(10) << media_aluno[i]
             << left << setw(15) << situacao[i];
             
        cout << endl << endl;
    }
    
    float maior_media = -1;
    string aluno_maior_media;
    
    for(int i = 0; i < qtd; i++){
        
        if(media_aluno[i] > maior_media){
            
            maior_media = media_aluno[i];
            
            aluno_maior_media = nomes[i];
            
        }
        
    }
    
    cout << "O aluno com maior média é " << aluno_maior_media << " com uma média de " << maior_media << ".";
    
}


