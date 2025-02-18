#include <stdio.h>
int weights[10],values[10],x[10],ic,mc,rw;
float wv[10];
int sort()
{
	for(int i=0;i<ic;i++)
	{
		for(int j=i+1;j<ic;j++)
		{
			if(wv[i]<wv[j])
			{
				int t1=weights[i];
				int t2=values[i];
				float t3=wv[i];
				weights[i]=weights[j];
				values[i]=values[j];
				wv[i]=wv[j];
				weights[j]=t1;
				values[j]=t2;
				wv[j]=t3;
			}
		}
	}
	for(int i=0;i<ic;i++) printf("%wf ",wv[i]);
}
int greedy()
{
	float total_profit=0;
	for(int i=0;i<ic;i++)
	{
		if(weights[i]>rw)
		{
			total_profit+=float(values[i]*rw)/weights[i];
			rw=0;
			break;
		}
		total_profit+=values[i];
		rw-=weights[i];
	}
	printf("Total_Profit=%.2f",total_profit);
}
int main()
{
	printf("Enter the Number of Items=");
	scanf("%d",&ic);
	printf("Enter the Maximum Weight:");
	scanf("%d",&mc);
	rw=mc;
	printf("Enter the Item Weights and Profits\n");
	for(int i=0;i<ic;i++)
	{
		scanf("%d%d",&weights[i],&values[i]);
		wv[i]=float(values[i])/weights[i];
	}
	sort();
	greedy();
}
