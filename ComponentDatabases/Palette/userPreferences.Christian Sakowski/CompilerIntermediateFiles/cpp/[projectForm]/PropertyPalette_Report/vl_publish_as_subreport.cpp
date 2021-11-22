extern Txt Kvl__current__area;
extern Txt kSeYFyM6O2tg;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PARSE__SETPAGEPROPERTYLONG;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__publish__as__subreport[];
void obj_p_PropertyPalette__Report_00vl__publish__as__subreport( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__publish__as__subreport);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Txt t4;
			t4=kSeYFyM6O2tg.get();
			Long t5;
			c.f.fLine=7;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t6;
			t6=7;
			Long t7;
			t7=lvl__area.get();
			proc_PARSE__SETPAGEPROPERTYLONG(glob,ctx,3,3,(PCV[]){t7.cv(),t6.cv(),t5.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
