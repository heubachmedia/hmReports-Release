Asm4d_Proc proc_PAL__SETTABBAR;
extern unsigned char D_obj_p_hmReports__Palette_00vl__btn__layerlist[];
void obj_p_hmReports__Palette_00vl__btn__layerlist( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_hmReports__Palette_00vl__btn__layerlist);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=1;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Long t2;
			t2=1;
			c.f.fLine=2;
			proc_PAL__SETTABBAR(glob,ctx,1,1,(PCV[]){t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
