extern Txt K;
extern Txt Ktl__layer__id;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
extern Txt ksBJ7xmK$Pow;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00tf__layer__visible[];
void obj_p_PropertyPalette__Layerlist_00tf__layer__visible( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00tf__layer__visible);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Bool lvf__visible;
		Ptr lvp__object__layer__visible;
		Value_array_text ltt__layernames;
		Bool lvf__other__visible;
		Long lvl__prop__long;
		Long lvl__area;
		Value_array_longint ltl__layerIDs;
		Txt lvt__prop__text;
		Long lvl__pos;
		Ptr lvp__object__layer__id;
		{
			Long t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (20!=t0.get()) goto _2;
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
			if (g->Call(ctx,(PCV[]){t6.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t6.get();
		}
		{
			Ptr t7;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t7.cv(),Long(3).cv(),ksBJ7xmK$Pow.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__visible=t7.get();
		}
		{
			Bool t8;
			t8=0<lvl__pos.get();
			Ref t9;
			c.f.fLine=14;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__object__layer__id.cv(),(PCV)-1,nullptr})) goto _0;
			Long t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,274)) goto _0;
			Bool t11;
			t11=lvl__pos.get()<=t10.get();
			if (!( t8.get()&&t11.get())) goto _3;
		}
		{
			Bool t13;
			c.f.fLine=16;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),lvp__object__layer__visible.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			lvf__visible=t13.get();
		}
		{
			Bool t14;
			t14=lvf__visible.get();
			Bool t15;
			t15=!(t14.get());
			if (!(t15.get())) goto _4;
		}
		{
			Ref t16;
			t16.setLocalRef(ctx,ltl__layerIDs.cv());
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t17;
			t17.setLocalRef(ctx,ltt__layernames.cv());
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){nullptr,t17.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t18;
			t18=lvl__area.get();
			c.f.fLine=23;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,24).cv(),nullptr,t18.cv(),lvl__area.cv(),(CV*)9,ltl__layerIDs.cv(),nullptr,(CV*)65543,ltt__layernames.cv(),nullptr,(CV*)65543},3)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t19;
			t19=false;
			lvf__other__visible=t19.get();
		}
		li=1;
		{
			Ref t20;
			t20.setLocalRef(ctx,ltl__layerIDs.cv());
			Long t21;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t21.cv(),t20.cv()},1,274)) goto _0;
			v0=t21.get();
		}
		goto _5;
_6:
		{
			Long t22;
			t22=ltl__layerIDs.arrayElem(li.get()).get();
			Variant t23;
			c.f.fLine=29;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t24;
			if (g->OperationOnAny(ctx,7,t22.cv(),t23.cv(),t24.cv())) goto _0;
			if (!(t24.get())) goto _7;
		}
		lvl__prop__long=0;
		lvt__prop__text=K.get();
		{
			Txt t25;
			t25=lvt__prop__text.get();
			Long t26;
			t26=lvl__prop__long.get();
			Long t27;
			t27=2;
			Long t28;
			t28=ltl__layerIDs.arrayElem(li.get()).get();
			Long t29;
			t29=lvl__area.get();
			c.f.fLine=33;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,26).cv(),nullptr,t29.cv(),lvl__area.cv(),(CV*)9,t28.cv(),nullptr,(CV*)9,t27.cv(),nullptr,(CV*)9,t26.cv(),lvl__prop__long.cv(),(CV*)9,t25.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		if (1!=lvl__prop__long.get()) goto _8;
		{
			Bool t31;
			t31=true;
			lvf__other__visible=t31.get();
		}
		{
			Ref t32;
			t32.setLocalRef(ctx,ltl__layerIDs.cv());
			Long t33;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv()},1,274)) goto _0;
			li=t33.get()+1;
		}
_8:
_7:
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		{
			Bool t37;
			t37=lvf__other__visible.get();
			Bool t38;
			t38=!(t37.get());
			if (!(t38.get())) goto _9;
		}
		c.f.fLine=46;
		if (g->Call(ctx,(PCV[]){nullptr},0,151)) goto _0;
		g->Check(ctx);
		{
			Bool t39;
			t39=true;
			lvf__visible=t39.get();
		}
		{
			Bool t40;
			t40=lvf__visible.get();
			c.f.fLine=48;
			if (!g->SetValue(ctx,(PCV[]){t40.cv(),lvp__object__layer__visible.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
		}
_9:
_4:
		{
			Bool t41;
			t41=lvf__visible.get();
			Num t42;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t42.cv(),t41.cv()},1,11)) goto _0;
			Txt t43;
			t43=K.get();
			Long t44;
			t44=(sLONG)lrint(t42.get());
			Long t45;
			t45=2;
			Long t46;
			if (!g->GetValue(ctx,(PCV[]){t46.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t47;
			t47=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,25).cv(),nullptr,t47.cv(),lvl__area.cv(),(CV*)9,t46.cv(),nullptr,(CV*)9,t45.cv(),nullptr,(CV*)9,t44.cv(),nullptr,(CV*)9,t43.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
