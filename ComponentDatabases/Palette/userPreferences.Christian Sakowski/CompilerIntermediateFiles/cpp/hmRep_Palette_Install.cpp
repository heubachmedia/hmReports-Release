extern Txt Kpal__update;
extern Txt khsdFSl0l6gM;
extern unsigned char D_proc_HMREP__PALETTE__INSTALL[];
void proc_HMREP__PALETTE__INSTALL( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_HMREP__PALETTE__INSTALL);
	if (!ctx->doingAbort) try {
		Long lvl__left;
		Long lvl__top;
		Long lvl__height;
		Txt lvt__subform;
		Long lvl__area;
		Long lvl__right;
		Long lvl__bottom;
		lvt__subform=Parm<Txt>(inParams,inNbParam,1).get();
		lvl__area=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=inNbExplicitParam;
			if (2>=t0.get()) goto _2;
		}
		lvl__height=Parm<Long>(inParams,inNbParam,3).get();
		goto _3;
_2:
		lvl__left=0;
		lvl__top=0;
		lvl__right=0;
		lvl__bottom=0;
		{
			Ref t2;
			t2.setLocalRef(ctx,lvl__bottom.cv());
			Ref t3;
			t3.setLocalRef(ctx,lvl__right.cv());
			Ref t4;
			t4.setLocalRef(ctx,lvl__top.cv());
			Ref t5;
			t5.setLocalRef(ctx,lvl__left.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),lvt__subform.cv(),t5.cv(),t4.cv(),t3.cv(),t2.cv()},6,663)) goto _0;
			g->Check(ctx);
		}
		lvl__height=lvl__bottom.get()-lvl__top.get();
_3:
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__subform.cv(),khsdFSl0l6gM.cv(),Ref((optyp)3).cv(),lvl__height.cv()},4,1085)) goto _0;
		g->Check(ctx);
		c.f.fLine=24;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__subform.cv(),Kpal__update.cv(),Ref((optyp)3).cv(),lvl__area.cv(),Long(1).cv()},5,1085)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
