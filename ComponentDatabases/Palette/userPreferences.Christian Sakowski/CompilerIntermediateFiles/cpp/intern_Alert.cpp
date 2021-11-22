extern int32_t vvt__dialog__alert;
extern Txt KDLG__Alert;
extern Txt K_25_25_25;
extern unsigned char D_proc_INTERN__ALERT[];
void proc_INTERN__ALERT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__ALERT);
	if (!ctx->doingAbort) try {
		Txt lvt__locString;
		Long lvl__ref;
		lvt__locString=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Txt t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv(),lvt__locString.cv()},1,991)) goto _0;
			g->Check(ctx);
			Var<Txt>(ctx,vvt__dialog__alert)=t0.get();
			Touch(ctx,vvt__dialog__alert);
		}
		{
			Long t1;
			t1=inNbExplicitParam;
			if (1>=t1.get()) goto _2;
		}
		{
			Txt t3;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t3.cv(),Var<Txt>(ctx,vvt__dialog__alert).cv(),K_25_25_25.cv(),Parm<Txt>(inParams,inNbParam,2).cv()},3,233)) goto _0;
			Var<Txt>(ctx,vvt__dialog__alert)=t3.get();
			Touch(ctx,vvt__dialog__alert);
		}
_2:
		{
			Long t4;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t4.cv(),KDLG__Alert.cv(),Long(5).cv()},2,675)) goto _0;
			g->Check(ctx);
			lvl__ref=t4.get();
		}
		c.f.fLine=13;
		if (g->Call(ctx,(PCV[]){nullptr,KDLG__Alert.cv()},1,40)) goto _0;
		g->Check(ctx);
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,lvl__ref.cv()},1,154)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
