extern unsigned char D_proc_UT__GET4DMAINVERSION[];
void proc_UT__GET4DMAINVERSION( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_UT__GET4DMAINVERSION);
	if (!ctx->doingAbort) try {
		Txt lvt__text;
		Long lvl__mainversion;
		new ( outResult) Long();
		{
			Txt t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Ref((optyp)3).cv()},1,493)) goto _0;
			g->Check(ctx);
			lvt__text=t0.get();
		}
		{
			Txt t1;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t1.cv(),lvt__text.cv(),Long(5).cv(),Long(2).cv()},3,12)) goto _0;
			Num t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,11)) goto _0;
			lvl__mainversion=(sLONG)lrint(t2.get());
		}
		Res<Long>(outResult)=lvl__mainversion.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
