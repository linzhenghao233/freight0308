#include <stdio.h>

int ticket_level(void);
double baggage_weight(void);
double ticket_price(void);
double baggage_fees(int level, double weight, double price);

int main(void) {
	int type, level;
	double weight, price;
	type = level = weight = price = 0;

	printf("��ѡ����Ļ�Ʊ����:\n");
	printf("1.����Ʊ\n2.��ͯƱ\n3.Ӥ��Ʊ\n");
	printf("���ѡ���ǣ������Ӧѡ��ĺ��룩��");
	scanf_s("%d", &type);
	switch (type) {
	case 1: {
		level = ticket_level();
		weight = baggage_weight();
		price = ticket_price();
		baggage_fees(level, weight, price);
		break;
	}
	case 2: {
		level = ticket_level();
		weight = baggage_weight();
		price = ticket_price();
		baggage_fees(level, weight, price);
		break;
	}
	case 3: {
		weight = baggage_weight();
		price = ticket_price();
		printf("��Ҫ֧�����˷��ã�%g", weight * price * 0.015);
	}
	}


	return 0;
}

int ticket_level(void) {
	int level;

	printf("��ѡ����Ļ�Ʊ�ȼ���\n");
	printf("1.ͷ�Ȳ�\n2.�����\n3.���ò�\n");
	printf("���ѡ���ǣ������Ӧѡ��ĺ��룩��");
	scanf_s("%d", &level);

	return level;
}

double baggage_weight(void) {
	double weight;

	printf("�����������������(kg)��");
	scanf_s("%lf", &weight);

	return weight;
}

double ticket_price(void) {
	double price;

	printf("�����뾭�ò�Ʊ�ۣ�");
	scanf_s("%lf", &price);

	return price;
}

double baggage_fees(int level, double weight, double price) {
	if (level == 1 && weight <= 40)
		printf("�˴�������ѡ�");
	else if (level == 1 && weight > 40)
		printf("��Ҫ֧�����˷��ã�%g", (weight - 40) * price * 0.015);
	else if (level == 2 && weight <= 30)
		printf("�˴�������ѡ�");
	else if (level == 2 && weight > 30)
		printf("��Ҫ֧�����˷��ã�%g", (weight - 30) * price * 0.015);
	else if (level == 3 && weight <= 20)
		printf("�˴�������ѡ�");
	else if (level == 3 && weight > 20)
		printf("��Ҫ֧�����˷��ã�%g", (weight - 20) * price * 0.015);
}