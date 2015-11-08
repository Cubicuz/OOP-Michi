class Gatter {
protected:
	int anzEin;   // Anzahl der Eingaenge 
	Konnektor *ein;
	Konnektor *aus;
	virtual void schalten(void) = 0;
public:
	Gatter(int anz);
	~Gatter(void);
	int setEingangsSignal(int nr, Signal sig);
	Signal getAusgangsSignal(void);
};
class UndGatter : public Gatter {
protected:
	void schalten(void);
public:
	UndGatter(int anz = 2);
};
class OderGatter : public Gatter {
protected:
	void schalten(void);
public:
	OderGatter(int anz = 2);
};