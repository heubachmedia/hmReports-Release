extern unsigned char D_proc_INTERN__COLORGETINDEXFROM16BIT[];
void proc_INTERN__COLORGETINDEXFROM16BIT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__COLORGETINDEXFROM16BIT);
	if (!ctx->doingAbort) try {
		Long lvl__red;
		Long lvl__index;
		Long lvl__green;
		Long lvl__blue;
		new ( outResult) Long();
		lvl__red=Parm<Long>(inParams,inNbParam,1).get();
		lvl__green=Parm<Long>(inParams,inNbParam,2).get();
		lvl__blue=Parm<Long>(inParams,inNbParam,3).get();
		{
			Long t0;
			t0=lvl__blue.get();
			Long t1;
			t1=lvl__green.get();
			Long t2;
			t2=lvl__red.get();
			Long t3;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,163).cv(),t3.cv(),t2.cv(),lvl__red.cv(),(CV*)9,t1.cv(),lvl__green.cv(),(CV*)9,t0.cv(),lvl__blue.cv(),(CV*)9},3)) goto _0;
			g->Check(ctx);
			lvl__index=t3.get();
		}
		if (-1!=lvl__index.get()) goto _2;
		lvl__index=0;
		goto _3;
_2:
		lvl__index=lvl__index.get()+1;
_3:
		Res<Long>(outResult)=lvl__index.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
