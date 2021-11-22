extern Txt Kpal__update;
extern Txt Kpalette__subform;
extern Txt kGr8ze6n4BUk;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_proc_PAL__UPDATE__MAIN[];
void proc_PAL__UPDATE__MAIN( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__MAIN);
	if (!ctx->doingAbort) try {
		Long lvl__formevent;
		Long lvl__area;
		new ( outResult) Long();
		lvl__formevent=Parm<Long>(inParams,inNbParam,1).get();
		{
			Txt t0;
			t0=kGr8ze6n4BUk.get();
			Long t1;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t1.get();
		}
		{
			Bool t2;
			t2=1==lvl__formevent.get();
			Bool t3;
			t3=4==lvl__formevent.get();
			Bool t4;
			t4=t2.get()||t3.get();
			Bool t5;
			t5=13==lvl__formevent.get();
			Bool t6;
			t6=t4.get()||t5.get();
			Bool t7;
			t7=19==lvl__formevent.get();
			Bool t8;
			t8=t6.get()||t7.get();
			Bool t9;
			t9=0==lvl__formevent.get();
			if (!( t8.get()||t9.get())) goto _2;
		}
		c.f.fLine=20;
		if (g->Call(ctx,(PCV[]){nullptr,Kpalette__subform.cv(),Kpal__update.cv(),Ref((optyp)3).cv(),lvl__area.cv(),lvl__formevent.cv()},5,1085)) goto _0;
		g->Check(ctx);
_2:
		Res<Long>(outResult)=lvl__area.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
