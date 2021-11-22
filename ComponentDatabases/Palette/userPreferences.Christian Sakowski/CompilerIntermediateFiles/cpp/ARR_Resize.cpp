extern unsigned char D_proc_ARR__RESIZE[];
void proc_ARR__RESIZE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ARR__RESIZE);
	if (!ctx->doingAbort) try {
		Long lvl__destsize;
		Long lvl__currarraysize;
		Ptr lvp__arrayptr;
		lvp__arrayptr=Parm<Ptr>(inParams,inNbParam,1).get();
		lvl__destsize=Parm<Long>(inParams,inNbParam,2).get();
		{
			Ref t0;
			c.f.fLine=12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t0.cv(),lvp__arrayptr.cv(),(PCV)-1,nullptr})) goto _0;
			Long t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv()},1,274)) goto _0;
			lvl__currarraysize=t1.get();
		}
		if (lvl__destsize.get()<=lvl__currarraysize.get()) goto _3;
		{
			Long t3;
			t3=lvl__currarraysize.get()+1;
			Long t4;
			t4=lvl__destsize.get()-lvl__currarraysize.get();
			Ref t5;
			c.f.fLine=16;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t5.cv(),lvp__arrayptr.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),t3.cv(),t4.cv()},3,227)) goto _0;
		}
		goto _2;
_3:
		if (lvl__destsize.get()>=lvl__currarraysize.get()) goto _4;
		{
			Long t7;
			t7=lvl__destsize.get()+1;
			Long t8;
			t8=lvl__currarraysize.get()-lvl__destsize.get();
			Ref t9;
			c.f.fLine=19;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__arrayptr.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv(),t7.cv(),t8.cv()},3,228)) goto _0;
		}
		goto _2;
_4:
		if (lvl__destsize.get()!=lvl__currarraysize.get()) goto _5;
		goto _2;
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
