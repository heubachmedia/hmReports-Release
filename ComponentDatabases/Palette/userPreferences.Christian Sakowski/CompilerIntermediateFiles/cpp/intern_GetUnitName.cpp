extern Txt K;
extern Txt Kmm;
extern Txt Kpixel;
extern Txt Kzoll;
Asm4d_Proc proc_PARSE__GETREPORTPROPERTYLONG;
extern unsigned char D_proc_INTERN__GETUNITNAME[];
void proc_INTERN__GETUNITNAME( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETUNITNAME);
	if (!ctx->doingAbort) try {
		Txt lvt__unit;
		Long lvl__area;
		Long lvl__unit;
		new ( outResult) Txt();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=17;
			Long t1;
			t1=lvl__area.get();
			Long t2;
			c.f.fLine=6;
			proc_PARSE__GETREPORTPROPERTYLONG(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__unit=t2.get();
		}
		if (1!=lvl__unit.get()) goto _3;
		{
			Txt t4;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t4.cv(),Kpixel.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__unit=t4.get();
		}
		goto _2;
_3:
		if (2!=lvl__unit.get()) goto _4;
		{
			Txt t6;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t6.cv(),Kzoll.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__unit=t6.get();
		}
		goto _2;
_4:
		if (3!=lvl__unit.get()) goto _5;
		{
			Txt t8;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t8.cv(),Kmm.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__unit=t8.get();
		}
		goto _2;
_5:
		lvt__unit=K.get();
_2:
		Res<Txt>(outResult)=lvt__unit.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
