extern Txt Kbackground;
Asm4d_Proc proc_PAL__SETTABBAR;
extern unsigned char D_form_p_hmReports__Palette[];
void form_p_hmReports__Palette( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_form_p_hmReports__Palette);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (1!=t0.get()) goto _3;
		}
		c.f.fLine=4;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kbackground.cv(),Long(14344165).cv(),Long(14344165).cv()},4,628)) goto _0;
		g->Check(ctx);
		{
			Long t2;
			t2=1;
			c.f.fLine=6;
			proc_PAL__SETTABBAR(glob,ctx,1,1,(PCV[]){t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		c.f.fLine=8;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-1).cv()},1,1086)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
