extern Txt Kpalette__subform;
extern Txt kGr8ze6n4BUk;
extern Txt khsdFSl0l6gM;
extern unsigned char D_proc_PAL__UPDATE__MAIN__SIZE[];
void proc_PAL__UPDATE__MAIN__SIZE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__MAIN__SIZE);
	if (!ctx->doingAbort) try {
		Long lvl__height;
		Long lvl__height__palette;
		Long lvl__width;
		Long lvl__width__palette;
		lvl__width=Parm<Long>(inParams,inNbParam,1).get();
		lvl__height=Parm<Long>(inParams,inNbParam,2).get();
		lvl__width__palette=400;
		lvl__height__palette=300;
		{
			Long t0;
			t0=lvl__width.get()-lvl__width__palette.get();
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kGr8ze6n4BUk.cv(),Long(0).cv(),Long(0).cv(),t0.cv(),lvl__height.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
			g->Check(ctx);
		}
		{
			Long t1;
			t1=lvl__width.get()-lvl__width__palette.get();
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Kpalette__subform.cv(),t1.cv(),Long(0).cv(),lvl__width.cv(),lvl__height.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=13;
		if (g->Call(ctx,(PCV[]){nullptr,Kpalette__subform.cv(),khsdFSl0l6gM.cv(),Ref((optyp)3).cv(),lvl__height.cv()},4,1085)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
