extern unsigned char D_proc_INTERN__COLOR8BITTO16BIT[];
void proc_INTERN__COLOR8BITTO16BIT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__COLOR8BITTO16BIT);
	if (!ctx->doingAbort) try {
		Ptr lvp__red16bit;
		Ptr lvp__blue16bit;
		Ptr lvp__green16bit;
		Long lvl__color8bit;
		lvl__color8bit=Parm<Long>(inParams,inNbParam,1).get();
		lvp__red16bit=Parm<Ptr>(inParams,inNbParam,2).get();
		lvp__green16bit=Parm<Ptr>(inParams,inNbParam,3).get();
		lvp__blue16bit=Parm<Ptr>(inParams,inNbParam,4).get();
		{
			Long t0;
			t0=lvl__color8bit.get()&16711680;
			Long t1;
			t1=(int32_t)((uint32_t)t0.get()>>8);
			c.f.fLine=9;
			if (!g->SetValue(ctx,(PCV[]){t1.cv(),lvp__red16bit.cv(),(PCV)-1,nullptr})) goto _0;
		}
		{
			Long t2;
			t2=lvl__color8bit.get()&65280;
			c.f.fLine=10;
			if (!g->SetValue(ctx,(PCV[]){t2.cv(),lvp__green16bit.cv(),(PCV)-1,nullptr})) goto _0;
		}
		{
			Long t3;
			t3=lvl__color8bit.get()&255;
			Long t4;
			t4=(int32_t)((uint32_t)t3.get()<<8);
			c.f.fLine=11;
			if (!g->SetValue(ctx,(PCV[]){t4.cv(),lvp__blue16bit.cv(),(PCV)-1,nullptr})) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
