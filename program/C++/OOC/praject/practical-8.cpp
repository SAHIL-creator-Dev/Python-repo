#include<iostream>
using namespace std;

class currency_converter
{
    private:
    double USD_TO_RUPEES_RATE;
    double RUPEES_TO_USD_RATE;
    double RUPEES_TO_CHINESE_YUAN_RATE;
    double USD_TO_EURO_RATE;
    double EURO_TO_USD_RATE;

    public:
    currency_converter(double USD_TO_RUPEES,double RUPEES_TO_USD, double RUPEES_TO_CHINESE_YUAN , double USD_TO_EURO, double EURO_TO_USD)
    {
        USD_TO_RUPEES_RATE = USD_TO_RUPEES;
        RUPEES_TO_USD_RATE = RUPEES_TO_USD;
        RUPEES_TO_CHINESE_YUAN_RATE = RUPEES_TO_CHINESE_YUAN;
        USD_TO_EURO_RATE = USD_TO_EURO;
        EURO_TO_USD_RATE = EURO_TO_USD;
    }
    
    // display currency rate
    void displayCurrencyRate() const{
        cout<<"----------------------------CURRENCY RATE---------------------------------\n";
        cout<<"1 US Dollar = "<<USD_TO_RUPEES_RATE<<" Indian Rupees\n";
        cout<<"1 Indian Rupees = "<<RUPEES_TO_USD_RATE<<" US Dollar\n";
        cout<<"1 Indian Rupees = "<<RUPEES_TO_CHINESE_YUAN_RATE<<" Chinese yuan\n";
        cout<<"1 US Dollar = "<<USD_TO_EURO_RATE<<" Euro\n";
        cout<<"1 Euro = "<<EURO_TO_USD_RATE<<" US Dollar\n\n";
    }

    // convertValue
    // USD to Indian Rupee
    double usdToIndianRupee(double USD_TO_INDIAN_RUPEES)
    {
        return USD_TO_RUPEES_RATE * USD_TO_INDIAN_RUPEES;
    }

    // Indian Rupees to USD
    double IndianRupeesToUSD(double INDIAN_RUPEES_TO_USD)
    {
        return RUPEES_TO_USD_RATE * INDIAN_RUPEES_TO_USD;
    }

    // Indian Rupees to Chinese Yuan
    double IndianRupeesToCNY(double INDIAN_RUPEES_TO_CNY)
    {
        return RUPEES_TO_CHINESE_YUAN_RATE * INDIAN_RUPEES_TO_CNY;
    }

    // USD to Euro
    double USDToEuro(double Usd_To_Euro)
    {
        return USD_TO_EURO_RATE * Usd_To_Euro;
    }

    // Euro to USD
    double EuroToUSD(double Euro_To_Usd)
    {
        return EURO_TO_USD_RATE * Euro_To_Usd;
    }
};

int main()
{
    const double initial_USD_TO_RUPEES_RATE = 83.33;
    const double initial_RUPEES_TO_USD_RATE = 0.012;
    const double initial_RUPEES_TO_CHINESE_RATE = 0.087;
    const double initial_USD_TO_EURO_RATE = 0.93;
    const double initial_EURO_TO_USD_RATE = 1.08;
    currency_converter choos_currecy(
        initial_USD_TO_RUPEES_RATE,
        initial_RUPEES_TO_USD_RATE,
        initial_RUPEES_TO_CHINESE_RATE,
        initial_USD_TO_EURO_RATE,
        initial_EURO_TO_USD_RATE
        );

    choos_currecy.displayCurrencyRate();

    // Amount Converting choices
    cout<<"-------------------------CHOISES------------------------------\n";
    cout<<"-->US Dollar to Indian Rupees (Type - 1)\n";
    cout<<"-->Indian Rupees to US Dollar (Type - 2)\n";
    cout<<"-->Indian Rupees to Chinese Yuan (Type - 3)\n";
    cout<<"-->US Dollar to Euro (Type - 4)\n";
    cout<<"-->Euro to USD (Type - 5)\n";

    // input choise
    int choise;
    cout<<"Enter choise : ";
    cin>>choise;
    cout<<"\n\n";

    double Amount;
    switch(choise)
    {
        case 1:
            cout<<"Enter US Dollar : ";
            cin>>Amount;
            cout<<"\n"<<Amount<<" US Dollar = "<<choos_currecy.usdToIndianRupee(Amount)<<" Rupees";
            break;
        
        case 2:
            cout<<"Enter Indian Rupees : ";
            cin>>Amount;
            cout<<"\n"<<Amount <<" Indian Rupees = "<<choos_currecy.IndianRupeesToUSD(Amount)<<" US Dollar";
            break;
        
        case 3:
            cout<<"Enter Indian Rupees : ";
            cin>>Amount;
            cout<<"\n"<<Amount<<" Indian Rupees = "<<choos_currecy.IndianRupeesToCNY(Amount)<<" Chinese Yuan";
            break;

        case 4:
            cout<<"Enter US Dollar : ";
            cin>>Amount;
            cout<<"\n"<<Amount<<" US Dollar = "<<choos_currecy.USDToEuro(Amount)<<" Euro";
            break;
        
        case 5:
            cout<<"Enter Euro : ";
            cin>>Amount;
            cout<<"\n"<<Amount<<" Euro = "<<choos_currecy.EuroToUSD(Amount)<<" US Dollar";
            break;

        default:
            cout<<"You Typed wrong value";
            break;
    }
}