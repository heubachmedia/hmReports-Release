extern Txt Ktl__layer__id;
extern Txt Kvl__current__area;
extern Txt k$Nb2wrCnCnY;
extern Txt k9zyBXdkYkVM;
extern Txt kX3QqHMeBw4k;
Asm4d_Proc proc_INTERN__ALERT;
Asm4d_Proc proc_INTERN__CONFIRM;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00Schaltfläche_203D1[];
void obj_p_PropertyPalette__Layerlist_00Schaltfläche_203D1( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00Schaltfläche_203D1);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__pos;
		Ptr lvp__object__layer__id;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=6;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Txt t4;
			t4=k9zyBXdkYkVM.get();
			Long t5;
			c.f.fLine=8;
			proc_LISTBOX__GETPOSOBJECT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos=t5.get();
		}
		if (0>=lvl__pos.get()) goto _3;
		{
			Txt t7;
			t7=kX3QqHMeBw4k.get();
			Bool t8;
			c.f.fLine=12;
			proc_INTERN__CONFIRM(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!(t8.get())) goto _4;
		}
		{
			Ptr t9;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t9.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t9.get();
		}
		{
			Long t10;
			t10=lvl__area.get();
			Long t11;
			c.f.fLine=16;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,32).cv(),t11.cv(),t10.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Variant t12;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t13;
			if (g->OperationOnAny(ctx,6,t12.cv(),t11.cv(),t13.cv())) goto _0;
			if (!(t13.get())) goto _5;
		}
		{
			Txt t14;
			Txt t15;
			t15=k$Nb2wrCnCnY.get();
			c.f.fLine=18;
			proc_INTERN__ALERT(glob,ctx,1,2,(PCV[]){t15.cv(),t14.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _6;
_5:
		{
			Long t16;
			c.f.fLine=22;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t17;
			t17=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,71).cv(),nullptr,t17.cv(),lvl__area.cv(),(CV*)9,t16.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=24;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2001).cv()},1,1086)) goto _0;
		g->Check(ctx);
_6:
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
