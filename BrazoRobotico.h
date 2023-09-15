Class BrazoRobotico {
	private:
		double x;
		double y;
		double z;
		bool sujetando;
	public:
		BrazoRobotico(double x, double y, double z, bool sujetando);
		int getX():
		int getY();
		int getZ();
		bool getSujetando();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
}
