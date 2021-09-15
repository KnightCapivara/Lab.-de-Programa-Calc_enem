#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, n_humanas, n_natureza, n_linguagem, n_matematica, n_redacao, media; 

	printf("Informe o numero de candidatos:");
	scanf("%d", &n);

	for(i=0; i<n; i++) 
{
		printf("\nNota de ciencias humanas e suas tecnologias: ");
		scanf("%d",&n_humanas);
		printf("\nNota de ciencias da natureza e suas tecnologias: ");
		scanf("%d",&n_natureza);
		printf("\nMota de linguagens, codigos e suas tecnologias: ");
		scanf("%d",&n_linguagem);
		printf("\nNota de matematica e suas tecnologias: ");
		scanf("%d",&n_matematica);
		printf("\nNota de redacao: ");
		scanf("%d",&n_redacao);
		media = ((n_humanas*1)+(n_natureza*3)+(n_linguagem*2)+(n_matematica*1)+(n_redacao*3)/10);
			printf("\nA media eh%d\n",media);
			printf("\nA sua nota de ciencias humanas e suas tecnologias eh: %d",n_humanas);
			printf("\nO peso da nota eh 1\n");
			printf("\nA sua nota de ciencias da natureza e suas tecnologias eh: %d",n_natureza);
			printf("\nO peso da nota eh 3\n");
			printf("\nA sua nota de linguagens, codigos e suas tecnologias eh: %d",n_linguagem);
			printf("\nO peso da nota eh 2\n");
			printf("\nA sua nota de matematica e suas tecnologias eh: %d",n_matematica);
			printf("\nO peso da nota eh 1\n");
			printf("\nA sua nota de redacao eh: %d",n_redacao);
			printf("\nO peso da nota eh 3");
	
		if (n_matematica>=450&&n_redacao>=500&&n_linguagem>=500&&n_humanas>=450&&n_natureza>=500)
			printf("\nEsta classificado\n");
			
				else
					printf("\nEsta desclassificado\n");
	
}
	
	system("pause");
	return 0;
}
