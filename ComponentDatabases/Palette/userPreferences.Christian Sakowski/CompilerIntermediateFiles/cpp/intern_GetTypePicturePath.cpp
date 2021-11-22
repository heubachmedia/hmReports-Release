extern Txt K;
extern Txt KField__10_2Epng;
extern Txt KField__11_2Epng;
extern Txt KField__12_2Epng;
extern Txt KField__1_2Epng;
extern Txt KField__2_2Epng;
extern Txt KField__3_2Epng;
extern Txt KField__4_2Epng;
extern Txt KField__5_2Epng;
extern Txt KField__6_2Epng;
extern Txt KField__7_2Epng;
extern Txt KField__8_2Epng;
extern Txt KField__9_2Epng;
extern Txt KPictures;
extern Txt K_3A;
extern unsigned char D_proc_INTERN__GETTYPEPICTUREPATH[];
void proc_INTERN__GETTYPEPICTUREPATH( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETTYPEPICTUREPATH);
	if (!ctx->doingAbort) try {
		Txt lvt__file;
		Txt lvt__path;
		Long lvl__type;
		new ( outResult) Txt();
		lvl__type=Parm<Long>(inParams,inNbParam,1).get();
		if (0!=lvl__type.get()) goto _3;
		lvt__file=KField__1_2Epng.get();
		goto _2;
_3:
		if (1!=lvl__type.get()) goto _4;
		lvt__file=KField__9_2Epng.get();
		goto _2;
_4:
		{
			Bool t2;
			t2=2==lvl__type.get();
			Bool t3;
			t3=33==lvl__type.get();
			if (!( t2.get()||t3.get())) goto _5;
		}
		lvt__file=KField__2_2Epng.get();
		goto _2;
_5:
		if (4!=lvl__type.get()) goto _6;
		lvt__file=KField__3_2Epng.get();
		goto _2;
_6:
		if (6!=lvl__type.get()) goto _7;
		lvt__file=KField__5_2Epng.get();
		goto _2;
_7:
		if (11!=lvl__type.get()) goto _8;
		lvt__file=KField__4_2Epng.get();
		goto _2;
_8:
		if (9!=lvl__type.get()) goto _9;
		lvt__file=KField__7_2Epng.get();
		goto _2;
_9:
		if (8!=lvl__type.get()) goto _10;
		lvt__file=KField__6_2Epng.get();
		goto _2;
_10:
		if (25!=lvl__type.get()) goto _11;
		lvt__file=KField__8_2Epng.get();
		goto _2;
_11:
		if (35!=lvl__type.get()) goto _12;
		lvt__file=KField__10_2Epng.get();
		goto _2;
_12:
		if (3!=lvl__type.get()) goto _13;
		lvt__file=KField__12_2Epng.get();
		goto _2;
_13:
		if (30!=lvl__type.get()) goto _14;
		lvt__file=KField__11_2Epng.get();
		goto _2;
_14:
		lvt__file=K.get();
_2:
		{
			Bool t14;
			t14=g->CompareString(ctx,lvt__file.get(),K.get())!=0;
			if (!(t14.get())) goto _15;
		}
		{
			Txt t15;
			g->AddString(KPictures.get(),K_3A.get(),t15.get());
			g->AddString(t15.get(),lvt__file.get(),lvt__path.get());
		}
		goto _16;
_15:
		lvt__path=K.get();
_16:
		Res<Txt>(outResult)=lvt__path.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
