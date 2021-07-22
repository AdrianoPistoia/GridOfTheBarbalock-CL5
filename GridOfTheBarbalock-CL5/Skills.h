#pragma once
#include <string>
class Skills
{
private:
	int acrobatics;
	int animalH;
	int arcana;
	int athletics;
	int deception;
	int history;
	int insight;
	int intimidation;
	int investigation;
	int medicine;
	int nature;
	int perception;
	int performance;
	int persuasion;
	int religion;
	int	SOH;
	int	stealth;
	int	survival;
public:
	///SETTERS
	void setAcrobatics(int n) { acrobatics= n; };
	void setAnimalH(int n) { animalH= n; };
	void setArcana(int n) {arcana = n; };
	void setAthletics(int n) {athletics = n; };
	void setDeception(int n) { deception= n; };
	void setHistory(int n) { history= n; };
	void setInsigth(int n) { insight= n; };
	void setIntimidaiton(int n) { intimidation= n; };
	void setInvestigation(int n) { investigation= n; };
	void setMedicine(int n) { medicine= n; };
	void setNature(int n) { nature= n; };
	void setPerception(int n) { perception= n; };
	void setPerformance(int n) { performance= n; };
	void setPersuasion(int n) { persuasion = n; };
	void setReligion(int n) { religion= n; };
	void setSOH(int n) { SOH= n; };
	void setStealth(int n) { stealth= n; };
	void setSurvival(int n) { survival= n; };

	///GETTERS
	int getAcrobatics() { return acrobatics; };
	int getAnimalH() { return animalH; };
	int getArcana() { return arcana; };
	int getAthletics() { return athletics; };
	int getDeception() { return deception; };
	int getHistory() { return history; };
	int getInsigth() { return insight; };
	int getIntimidaiton() { return intimidation; };
	int getInvestigation() { return investigation; };
	int getMedicine() { return medicine; };
	int getNature() { return nature; };
	int getPerception() { return perception; };
	int getPerformance() { return performance; };
	int getPersuasion() { return persuasion; };
	int getReligion() { return religion; };
	int getSOH() { return SOH; };
	int getStealth() { return stealth; };
	int getSurvival() { return survival; };
	///CONSTR
	Skills();



};

