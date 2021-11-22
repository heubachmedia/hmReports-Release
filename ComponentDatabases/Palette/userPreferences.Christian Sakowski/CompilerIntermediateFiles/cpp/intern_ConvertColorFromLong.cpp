extern Txt K0;
extern Txt K00;
extern Txt K_23;
extern Txt K_26x;
extern Txt Knone;
extern unsigned char D_proc_INTERN__CONVERTCOLORFROMLONG[];
void proc_INTERN__CONVERTCOLORFROMLONG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__CONVERTCOLORFROMLONG);
	if (!ctx->doingAbort) try {
		Long lvl__length;
		Long lvl__color;
		Txt lvt__result;
		new ( outResult) Txt();
		lvl__color=Parm<Long>(inParams,inNbParam,1).get();
		if (0<=lvl__color.get()) goto _2;
		lvt__result=Knone.get();
		goto _3;
_2:
		{
			Txt t1;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t1.cv(),lvl__color.cv(),K_26x.cv()},2,10)) goto _0;
			lvt__result=t1.get();
		}
		{
			Long t2;
			t2=lvt__result.get().fLength;
			if (6!=t2.get()) goto _4;
		}
		{
			Txt t4;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t4.cv(),lvt__result.cv(),Long(3).cv()},2,12)) goto _0;
			g->AddString(K00.get(),t4.get(),lvt__result.get());
		}
		goto _5;
_4:
		{
			Txt t6;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t6.cv(),lvt__result.cv(),Long(5).cv()},2,12)) goto _0;
			lvt__result=t6.get();
		}
_5:
		{
			Txt t7;
			g->AddString(K_23.get(),lvt__result.get(),t7.get());
			lvt__result=t7.get();
		}
		{
			Long t8;
			t8=lvt__result.get().fLength;
			lvl__length=t8.get();
		}
		if (7<=lvl__length.get()) goto _6;
		{
			Long t10;
			t10=7-lvl__length.get();
			Txt t11;
			g->MultiplyString(K0.get(),(sLONG)t10.get(),t11.get());
			Txt t12;
			g->AddString(lvt__result.get(),t11.get(),t12.get());
			lvt__result=t12.get();
		}
_6:
_3:
		Res<Txt>(outResult)=lvt__result.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
