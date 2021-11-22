extern Txt kEuDum6AQAGs;
extern Txt kwswSrHFilS8;
extern unsigned char D_proc_PAL__UPDATE__PALETTE__SIZE[];
void proc_PAL__UPDATE__PALETTE__SIZE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__PALETTE__SIZE);
	if (!ctx->doingAbort) try {
		Long lvl__height;
		lvl__height=Parm<Long>(inParams,inNbParam,1).get();
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kwswSrHFilS8.cv(),Long(0).cv(),Long(221).cv(),Long(384).cv(),lvl__height.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
		g->Check(ctx);
		c.f.fLine=6;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kEuDum6AQAGs.cv(),Long(0).cv(),Long(221).cv(),Long(384).cv(),lvl__height.cv(),Ref((optyp)3).cv()},7,664)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
