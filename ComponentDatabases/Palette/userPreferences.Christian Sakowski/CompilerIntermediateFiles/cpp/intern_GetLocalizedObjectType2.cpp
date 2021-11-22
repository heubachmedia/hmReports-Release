extern Txt KTypeGroup;
extern Txt Karc;
extern Txt Kchart;
extern Txt Kfreehand;
extern Txt Kline;
extern Txt Koval;
extern Txt Kpath;
extern Txt Kpicture;
extern Txt Krect;
extern Txt Ksubreport;
extern Txt Ktext;
extern Txt Kunknown;
extern unsigned char D_proc_INTERN__GETLOCALIZEDOBJECTTYPE2[];
void proc_INTERN__GETLOCALIZEDOBJECTTYPE2( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETLOCALIZEDOBJECTTYPE2);
	if (!ctx->doingAbort) try {
		Long lvl__objecttype;
		Txt lvt__objecttype;
		new ( outResult) Txt();
		lvl__objecttype=Parm<Long>(inParams,inNbParam,1).get();
		if (0!=lvl__objecttype.get()) goto _3;
		lvt__objecttype=Kunknown.get();
		goto _2;
_3:
		if (5!=lvl__objecttype.get()) goto _4;
		lvt__objecttype=KTypeGroup.get();
		goto _2;
_4:
		if (4!=lvl__objecttype.get()) goto _5;
		lvt__objecttype=Kline.get();
		goto _2;
_5:
		if (3!=lvl__objecttype.get()) goto _6;
		lvt__objecttype=Koval.get();
		goto _2;
_6:
		if (1!=lvl__objecttype.get()) goto _7;
		lvt__objecttype=Krect.get();
		goto _2;
_7:
		if (2!=lvl__objecttype.get()) goto _8;
		lvt__objecttype=Ktext.get();
		goto _2;
_8:
		if (6!=lvl__objecttype.get()) goto _9;
		lvt__objecttype=Kpicture.get();
		goto _2;
_9:
		if (7!=lvl__objecttype.get()) goto _10;
		lvt__objecttype=Karc.get();
		goto _2;
_10:
		if (8!=lvl__objecttype.get()) goto _11;
		lvt__objecttype=Kpath.get();
		goto _2;
_11:
		if (9!=lvl__objecttype.get()) goto _12;
		lvt__objecttype=Kfreehand.get();
		goto _2;
_12:
		if (10!=lvl__objecttype.get()) goto _13;
		lvt__objecttype=Ksubreport.get();
		goto _2;
_13:
		if (11!=lvl__objecttype.get()) goto _14;
		lvt__objecttype=Kchart.get();
		goto _2;
_14:
		lvt__objecttype=Kunknown.get();
_2:
		{
			Txt t12;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t12.cv(),lvt__objecttype.cv()},1,991)) goto _0;
			g->Check(ctx);
			Res<Txt>(outResult)=t12.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
