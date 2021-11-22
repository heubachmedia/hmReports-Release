extern Txt K;
extern unsigned char D_db_1[];
void db_1( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_db_1);
	if (!ctx->doingAbort) try {
		Long lvl__error;
		{
			Bool t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,492)) goto _0;
			if (!(t0.get())) goto _2;
		}
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr},0,291)) goto _0;
		g->Check(ctx);
		goto _3;
_2:
		c.f.fLine=9;
		if (g->Call(ctx,(PCV[]){nullptr,Long(34).cv(),Long(0).cv()},2,642)) goto _0;
		g->Check(ctx);
		{
			Txt t1;
			t1=K.get();
			Long t2;
			c.f.fLine=11;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,2).cv(),t2.cv(),t1.cv(),nullptr,(CV*)33},1)) goto _0;
			g->Check(ctx);
			lvl__error=t2.get();
		}
_3:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
