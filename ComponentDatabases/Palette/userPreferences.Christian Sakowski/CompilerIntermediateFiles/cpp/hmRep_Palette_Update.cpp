extern Txt Kpal__update;
extern unsigned char D_proc_HMREP__PALETTE__UPDATE[];
void proc_HMREP__PALETTE__UPDATE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_HMREP__PALETTE__UPDATE);
	if (!ctx->doingAbort) try {
		Txt lvt__subform;
		Long lvl__formevent;
		Long lvl__area;
		lvt__subform=Parm<Txt>(inParams,inNbParam,1).get();
		lvl__area=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			lvl__formevent=t0.get();
		}
		{
			Bool t1;
			t1=1==lvl__formevent.get();
			Bool t2;
			t2=4==lvl__formevent.get();
			Bool t3;
			t3=t1.get()||t2.get();
			Bool t4;
			t4=13==lvl__formevent.get();
			Bool t5;
			t5=t3.get()||t4.get();
			Bool t6;
			t6=19==lvl__formevent.get();
			Bool t7;
			t7=t5.get()||t6.get();
			Bool t8;
			t8=27==lvl__formevent.get();
			Bool t9;
			t9=t7.get()||t8.get();
			Bool t10;
			t10=0==lvl__formevent.get();
			if (!( t9.get()||t10.get())) goto _2;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__subform.cv(),Kpal__update.cv(),Ref((optyp)3).cv(),lvl__area.cv(),lvl__formevent.cv()},5,1085)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
