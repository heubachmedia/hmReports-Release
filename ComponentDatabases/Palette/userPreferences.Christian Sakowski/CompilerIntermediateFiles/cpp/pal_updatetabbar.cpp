extern Txt k1InvreEsBck;
extern Txt k5_SBQhhnpDk;
extern Txt kPir1c5dxdxY;
extern Txt kX$DXmqH25z0;
extern Txt kcHLRifTxZpY;
extern Txt kfWicw_WfyIo;
extern Txt kxPY2TFSQVG4;
Asm4d_Proc proc_PAL__GETCURRENTTAB;
extern unsigned char D_proc_PAL__UPDATETABBAR[];
void proc_PAL__UPDATETABBAR( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATETABBAR);
	if (!ctx->doingAbort) try {
		Long lvl__last__area;
		Long lvl__area;
		Long lvl__currenttab;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			c.f.fLine=5;
			proc_PAL__GETCURRENTTAB(glob,ctx,0,0,nullptr,t0.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__currenttab=t0.get();
		}
		if (1!=lvl__currenttab.get()) goto _3;
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,kPir1c5dxdxY.cv(),kcHLRifTxZpY.cv(),Ref((optyp)3).cv(),lvl__area.cv()},4,1085)) goto _0;
		g->Check(ctx);
		goto _2;
_3:
		if (2!=lvl__currenttab.get()) goto _4;
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,kxPY2TFSQVG4.cv(),k1InvreEsBck.cv(),Ref((optyp)3).cv(),lvl__area.cv()},4,1085)) goto _0;
		g->Check(ctx);
		goto _2;
_4:
		if (3!=lvl__currenttab.get()) goto _5;
		lvl__last__area=0;
		{
			Ref t4;
			t4.setLocalRef(ctx,lvl__last__area.cv());
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){nullptr,k5_SBQhhnpDk.cv(),kX$DXmqH25z0.cv(),t4.cv()},3,1085)) goto _0;
			g->Check(ctx);
		}
		if (lvl__area.get()==lvl__last__area.get()) goto _6;
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,k5_SBQhhnpDk.cv(),kfWicw_WfyIo.cv(),Ref((optyp)3).cv(),lvl__area.cv(),Long(1).cv()},5,1085)) goto _0;
		g->Check(ctx);
_6:
		goto _2;
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
