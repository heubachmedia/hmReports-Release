extern unsigned char D_proc_OBJECT__GETPOINTER[];
void proc_OBJECT__GETPOINTER( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_OBJECT__GETPOINTER);
	if (!ctx->doingAbort) try {
		Txt lvt__object;
		new ( outResult) Ptr();
		lvt__object=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Ptr t0;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),lvt__object.cv()},2,1124)) goto _0;
			g->Check(ctx);
			Res<Ptr>(outResult)=t0.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
