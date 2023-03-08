#include <stdio.h>

int ticket_level(void);
double baggage_weight(void);
double ticket_price(void);
double baggage_fees(int level, double weight, double price);

int main(void) {
	int type, level;
	double weight, price;
	type = level = weight = price = 0;

	printf("请选择你的机票种类:\n");
	printf("1.成人票\n2.儿童票\n3.婴儿票\n");
	printf("你的选择是（输入对应选项的号码）：");
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
		printf("需要支付托运费用：%g", weight * price * 0.015);
	}
	}


	return 0;
}

int ticket_level(void) {
	int level;

	printf("请选择你的机票等级：\n");
	printf("1.头等舱\n2.公务舱\n3.经济舱\n");
	printf("你的选择是（输入对应选项的号码）：");
	scanf_s("%d", &level);

	return level;
}

double baggage_weight(void) {
	double weight;

	printf("请输入你的行李重量(kg)：");
	scanf_s("%lf", &weight);

	return weight;
}

double ticket_price(void) {
	double price;

	printf("请输入经济舱票价：");
	scanf_s("%lf", &price);

	return price;
}

double baggage_fees(int level, double weight, double price) {
	if (level == 1 && weight <= 40)
		printf("此次托运免费。");
	else if (level == 1 && weight > 40)
		printf("需要支付托运费用：%g", (weight - 40) * price * 0.015);
	else if (level == 2 && weight <= 30)
		printf("此次托运免费。");
	else if (level == 2 && weight > 30)
		printf("需要支付托运费用：%g", (weight - 30) * price * 0.015);
	else if (level == 3 && weight <= 20)
		printf("此次托运免费。");
	else if (level == 3 && weight > 20)
		printf("需要支付托运费用：%g", (weight - 20) * price * 0.015);
}