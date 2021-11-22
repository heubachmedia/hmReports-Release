extern int32_t vtf__invisible;
extern unsigned char D_proc_COMPILER__ARRAYS[];
void proc_COMPILER__ARRAYS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_COMPILER__ARRAYS);
	if (!ctx->doingAbort) try {
		c.f.fLine=1;
		if (g->Call(ctx,(PCV[]){nullptr,Ref(ctx,vtf__invisible).cv(),Long(0).cv()},2,223)) goto _0;
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
