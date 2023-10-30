#include <stdio.h>
#include <math.h>

struct QuadraticEquation
{
	double a,b,c,discriminant,root1,root2;
};

void CalculateDiscriminant(struct QuadraticEquation *equation)
{
	equation -> discriminant = equation -> b * equation -> b - 4 * equation -> a * equation -> c;
	
	if(equation -> discriminant > 0)
	{
		equation -> root1 = (-equation -> b + sqrt(equation -> discriminant)) / (2 * equation -> a);
		equation -> root2 = (-equation -> b - sqrt(equation -> discriminant)) / (2 * equation -> a);
		
		printf("Two Real Roots:\n");
		printf("Root 1 : %lf\n",equation -> root1);
		printf("Root 2 : %lf\n",equation -> root2);
	}
	
	else if (equation -> discriminant == 0)
	{
		equation -> root1 = -equation -> b / (2 * equation -> a);
		
		printf("Single Root: %lf\n",equation -> root1);
	}
	
	else
	{
		double reel     = -equation -> b / (2 * equation -> a );
		double complex  = sqrt(-equation -> discriminant) / (2 * equation -> a);
		
		printf("Root1 = %.2f + %.2fi And Root2 = %.2f - %.2fi\n",reel,complex,reel,complex);
	}
}

int main()
{
	struct QuadraticEquation equation;
	
	while(1)
	{
		
		printf("Enter The First Coefficient:\n");
		
		while(scanf("%lf",&equation.a) != 1)
		{
			printf("Invalid Input, Please Enter The Number!\n");
			return 0;
		}
	
		printf("Enter The Second Coefficient:\n");
		
		while(scanf("%lf",&equation.b) != 1)
		{
			printf("Invalid Input, Please Enter The Number!\n");
			return 0;
		}
	
		printf("Enter The Third Coefficient:\n");
		
		while(scanf("%lf",&equation.c) != 1)
		{
			printf("Invalid Input, Please Enter The Number!\n");
			return 0;
		}
	
		CalculateDiscriminant(&equation);
		
	}
	
	return 0;
}
