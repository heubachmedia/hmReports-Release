extern Txt K;
extern Txt K_20_28;
extern Txt K_29;
extern Txt Kaktuelle__ebene;
extern Txt Ktl__layer__id;
extern Txt Ktt__layer__name;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00tt__layer__name[];
void obj_p_PropertyPalette__Layerlist_00tt__layer__name( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00tt__layer__name);
	if (!ctx->doingAbort) try {
		Long lvl__prop__long;
		Long lvl__area;
		Ptr lvp__object__layer__name;
		Txt lvt__prop__text;
		Long lvl__pos;
		Ptr lvp__object__layer__id;
		{
			Long t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (41!=t0.get()) goto _3;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=8;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Txt t4;
			t4=k9zyBXdkYkVM.get();
			Long t5;
			c.f.fLine=9;
			proc_LISTBOX__GETPOSOBJECT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos=t5.get();
		}
		{
			Ptr t6;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t6.cv(),Long(3).cv(),Ktt__layer__name.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__name=t6.get();
		}
		{
			Ptr t7;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t7.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t7.get();
		}
		{
			Bool t8;
			t8=0<lvl__pos.get();
			Ref t9;
			c.f.fLine=14;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__object__layer__name.cv(),(PCV)-1,nullptr})) goto _0;
			Long t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,274)) goto _0;
			Bool t11;
			t11=lvl__pos.get()<=t10.get();
			if (!( t8.get()&&t11.get())) goto _4;
		}
		lvl__prop__long=0;
		lvt__prop__text=K.get();
		{
			Txt t13;
			t13=lvt__prop__text.get();
			Long t14;
			t14=lvl__prop__long.get();
			Long t15;
			t15=1;
			Long t16;
			c.f.fLine=18;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t17;
			t17=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,26).cv(),nullptr,t17.cv(),lvl__area.cv(),(CV*)9,t16.cv(),nullptr,(CV*)9,t15.cv(),nullptr,(CV*)9,t14.cv(),lvl__prop__long.cv(),(CV*)9,t13.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t18;
			t18=lvt__prop__text.get();
			c.f.fLine=20;
			if (!g->SetValue(ctx,(PCV[]){t18.cv(),lvp__object__layer__name.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
		}
_4:
		goto _2;
_3:
		{
			Long t19;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (14!=t19.get()) goto _5;
		}
		{
			Txt t21;
			t21=Kvl__current__area.get();
			Long t22;
			c.f.fLine=26;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t21.cv()},t22.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t22.get();
		}
		{
			Txt t23;
			t23=k9zyBXdkYkVM.get();
			Long t24;
			c.f.fLine=27;
			proc_LISTBOX__GETPOSOBJECT(glob,ctx,1,1,(PCV[]){t23.cv()},t24.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos=t24.get();
		}
		{
			Ptr t25;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t25.cv(),Long(3).cv(),Ktt__layer__name.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__name=t25.get();
		}
		{
			Ptr t26;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t26.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t26.get();
		}
		{
			Bool t27;
			t27=0<lvl__pos.get();
			Ref t28;
			c.f.fLine=32;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t28.cv(),lvp__object__layer__name.cv(),(PCV)-1,nullptr})) goto _0;
			Long t29;
			if (g->Call(ctx,(PCV[]){t29.cv(),t28.cv()},1,274)) goto _0;
			Bool t30;
			t30=lvl__pos.get()<=t29.get();
			if (!( t27.get()&&t30.get())) goto _6;
		}
		{
			Txt t32;
			c.f.fLine=34;
			if (!g->GetValue(ctx,(PCV[]){t32.cv(),lvp__object__layer__name.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t33;
			t33=0;
			Long t34;
			t34=1;
			Long t35;
			if (!g->GetValue(ctx,(PCV[]){t35.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t36;
			t36=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,25).cv(),nullptr,t36.cv(),lvl__area.cv(),(CV*)9,t35.cv(),nullptr,(CV*)9,t34.cv(),nullptr,(CV*)9,t33.cv(),nullptr,(CV*)9,t32.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Long t37;
			t37=lvl__area.get();
			Long t38;
			c.f.fLine=36;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,32).cv(),t38.cv(),t37.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Variant t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t40;
			if (g->OperationOnAny(ctx,6,t38.cv(),t39.cv(),t40.cv())) goto _0;
			if (!(t40.get())) goto _7;
		}
		{
			Variant t41;
			c.f.fLine=37;
			if (!g->GetValue(ctx,(PCV[]){t41.cv(),lvp__object__layer__name.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Variant t42;
			if (g->OperationOnAny(ctx,0,t41.cv(),K_20_28.cv(),t42.cv())) goto _0;
			Txt t43;
			if (g->Call(ctx,(PCV[]){t43.cv(),Kaktuelle__ebene.cv()},1,991)) goto _0;
			g->Check(ctx);
			Variant t44;
			if (g->OperationOnAny(ctx,0,t42.cv(),t43.cv(),t44.cv())) goto _0;
			Variant t45;
			if (g->OperationOnAny(ctx,0,t44.cv(),K_29.cv(),t45.cv())) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t45.cv(),lvp__object__layer__name.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
		}
_7:
_6:
		goto _2;
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
