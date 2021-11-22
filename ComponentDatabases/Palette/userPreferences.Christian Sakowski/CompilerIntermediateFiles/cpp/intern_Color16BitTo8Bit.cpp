extern unsigned char D_proc_INTERN__COLOR16BITTO8BIT[];
void proc_INTERN__COLOR16BITTO8BIT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__COLOR16BITTO8BIT);
	if (!ctx->doingAbort) try {
		Long lvl__red16bit;
		Long lvl__blue16bit;
		Long lvl__color8bit;
		Long lvl__green16bit;
		new ( outResult) Long();
		lvl__red16bit=Parm<Long>(inParams,inNbParam,1).get();
		lvl__green16bit=Parm<Long>(inParams,inNbParam,2).get();
		lvl__blue16bit=Parm<Long>(inParams,inNbParam,3).get();
		{
			Long t0;
			t0=(int32_t)((uint32_t)lvl__red16bit.get()>>8);
			Long t1;
			t1=(int32_t)((uint32_t)t0.get()<<16);
			Long t2;
			t2=(int32_t)((uint32_t)lvl__green16bit.get()>>8);
			Long t3;
			t3=(int32_t)((uint32_t)t2.get()<<8);
			Long t4;
			t4=t1.get()+t3.get();
			Long t5;
			t5=(int32_t)((uint32_t)lvl__blue16bit.get()>>8);
			lvl__color8bit=t4.get()+t5.get();
		}
		Res<Long>(outResult)=lvl__color8bit.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
