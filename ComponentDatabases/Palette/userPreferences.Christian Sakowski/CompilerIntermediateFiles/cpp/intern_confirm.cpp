extern int32_t vvl__ok;
extern int32_t vvt__dialog__alert;
extern Txt KDLG__Confirm;
extern unsigned char D_proc_INTERN__CONFIRM[];
void proc_INTERN__CONFIRM( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__CONFIRM);
	if (!ctx->doingAbort) try {
		Long lvl__window;
		Txt lvt__loc;
		new ( outResult) Bool();
		lvt__loc=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Txt t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv(),lvt__loc.cv()},1,991)) goto _0;
			g->Check(ctx);
			Var<Txt>(ctx,vvt__dialog__alert)=t0.get();
			Touch(ctx,vvt__dialog__alert);
		}
		{
			Long t1;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t1.cv(),KDLG__Confirm.cv(),Long(5).cv()},2,675)) goto _0;
			g->Check(ctx);
			lvl__window=t1.get();
		}
		c.f.fLine=9;
		if (g->Call(ctx,(PCV[]){nullptr,KDLG__Confirm.cv()},1,40)) goto _0;
		g->Check(ctx);
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,lvl__window.cv()},1,154)) goto _0;
		g->Check(ctx);
		Res<Bool>(outResult)=1==Var<Long>(ctx,vvl__ok).get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
