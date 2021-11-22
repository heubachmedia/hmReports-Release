extern Txt K;
extern Txt K_20;
extern Txt K_28;
extern Txt K_29;
extern Txt Kaktuelle__ebene;
extern Txt Ktb__layer__color;
extern Txt Ktf__layer__locked;
extern Txt Ktl__layer__id;
extern Txt Ktl__layer__style;
extern Txt Ktt__layer__name;
extern Txt Kvl__current__area;
extern Txt ksBJ7xmK$Pow;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_INTERN__COLOR16BITTO8BIT;
Asm4d_Proc proc_OBJECT__INITARRAY;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_PAL__GETCOLORSVG;
extern unsigned char D_proc_PAL__UPDATE__LAYERLIST[];
void proc_PAL__UPDATE__LAYERLIST( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__LAYERLIST);
	if (!ctx->doingAbort) try {
		Long v0;
		Long lvl__current__layer;
		Long v1;
		Long lvl__size;
		Long lvl__object__framecolor__blue;
		Long lvl__object__framecolor__red;
		Long li;
		Ptr lvp__object__layer__visible;
		Value_array_text ltt__layernames;
		Long lvl__prop__long;
		Long lvl__area;
		Long lvl__object__framecolor__green;
		Ptr lvp__object__layer__name;
		Ptr lvp__object__layer__color;
		Value_array_longint ltl__layerIDs;
		Txt lvt__prop__text;
		Ptr lvp__object__layer__locked;
		Ptr lvp__object__layer__id;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=lvl__area.get();
			Txt t1;
			t1=Kvl__current__area.get();
			c.f.fLine=7;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t2;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t2.cv(),Long(3).cv(),ksBJ7xmK$Pow.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__visible=t2.get();
		}
		{
			Ptr t3;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t3.cv(),Long(3).cv(),Ktb__layer__color.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__color=t3.get();
		}
		{
			Ptr t4;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t4.cv(),Long(3).cv(),Ktt__layer__name.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__name=t4.get();
		}
		{
			Ptr t5;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t5.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t5.get();
		}
		{
			Ptr t6;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t6.cv(),Long(3).cv(),Ktf__layer__locked.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__locked=t6.get();
		}
		{
			Long t7;
			t7=16;
			Txt t8;
			t8=Ktl__layer__style.get();
			Ptr t9;
			c.f.fLine=15;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t8.cv(),t7.cv()},t9.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,ltl__layerIDs.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,ltt__layernames.cv());
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t12;
			t12=lvl__area.get();
			c.f.fLine=20;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,24).cv(),nullptr,t12.cv(),lvl__area.cv(),(CV*)9,ltl__layerIDs.cv(),nullptr,(CV*)65543,ltt__layernames.cv(),nullptr,(CV*)65543},3)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t13;
			t13.setLocalRef(ctx,ltl__layerIDs.cv());
			Long t14;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv()},1,274)) goto _0;
			lvl__size=t14.get();
		}
		{
			Long t15;
			t15=lvl__size.get();
			c.f.fLine=24;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__layer__visible.cv(),t15.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t16;
			t16=lvl__size.get();
			c.f.fLine=25;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__layer__color.cv(),t16.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t17;
			t17=lvl__size.get();
			c.f.fLine=26;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__layer__name.cv(),t17.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t18;
			t18=lvl__size.get();
			c.f.fLine=27;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__layer__id.cv(),t18.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t19;
			t19=lvl__size.get();
			c.f.fLine=28;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__layer__locked.cv(),t19.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t20;
			t20=lvl__area.get();
			Long t21;
			c.f.fLine=30;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,32).cv(),t21.cv(),t20.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__current__layer=t21.get();
		}
		li=1;
		v0=lvl__size.get();
		goto _2;
_3:
		lvl__prop__long=0;
		lvt__prop__text=K.get();
		{
			Txt t22;
			t22=lvt__prop__text.get();
			Long t23;
			t23=lvl__prop__long.get();
			Long t24;
			t24=2;
			Long t25;
			t25=ltl__layerIDs.arrayElem(li.get()).get();
			Long t26;
			t26=lvl__area.get();
			c.f.fLine=36;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,26).cv(),nullptr,t26.cv(),lvl__area.cv(),(CV*)9,t25.cv(),nullptr,(CV*)9,t24.cv(),nullptr,(CV*)9,t23.cv(),lvl__prop__long.cv(),(CV*)9,t22.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		lvl__object__framecolor__red=0;
		lvl__object__framecolor__green=0;
		lvl__object__framecolor__blue=0;
		{
			Long t27;
			t27=lvl__object__framecolor__blue.get();
			Long t28;
			t28=lvl__object__framecolor__green.get();
			Long t29;
			t29=lvl__object__framecolor__red.get();
			Long t30;
			t30=ltl__layerIDs.arrayElem(li.get()).get();
			Long t31;
			t31=4;
			Long t32;
			t32=lvl__area.get();
			c.f.fLine=41;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,27).cv(),nullptr,t32.cv(),lvl__area.cv(),(CV*)9,t31.cv(),nullptr,(CV*)9,t30.cv(),nullptr,(CV*)9,t29.cv(),lvl__object__framecolor__red.cv(),(CV*)9,t28.cv(),lvl__object__framecolor__green.cv(),(CV*)9,t27.cv(),lvl__object__framecolor__blue.cv(),(CV*)9},6)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t33;
			t33=1==lvl__prop__long.get();
			c.f.fLine=43;
			if (!g->SetValue(ctx,(PCV[]){t33.cv(),lvp__object__layer__visible.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		{
			Txt t34;
			t34=ltt__layernames.arrayElem(li.get()).get();
			c.f.fLine=44;
			if (!g->SetValue(ctx,(PCV[]){t34.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		{
			Long t35;
			t35=lvl__object__framecolor__blue.get();
			Long t36;
			t36=lvl__object__framecolor__green.get();
			Long t37;
			t37=lvl__object__framecolor__red.get();
			Long t38;
			c.f.fLine=45;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t37.cv(),t36.cv(),t35.cv()},t38.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Pic t39;
			proc_PAL__GETCOLORSVG(glob,ctx,1,1,(PCV[]){t38.cv()},t39.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t39.cv(),lvp__object__layer__color.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		{
			Long t40;
			t40=ltl__layerIDs.arrayElem(li.get()).get();
			c.f.fLine=46;
			if (!g->SetValue(ctx,(PCV[]){t40.cv(),lvp__object__layer__id.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		lvl__prop__long=0;
		lvt__prop__text=K.get();
		{
			Txt t41;
			t41=lvt__prop__text.get();
			Long t42;
			t42=lvl__prop__long.get();
			Long t43;
			t43=3;
			Long t44;
			t44=ltl__layerIDs.arrayElem(li.get()).get();
			Long t45;
			t45=lvl__area.get();
			c.f.fLine=50;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,26).cv(),nullptr,t45.cv(),lvl__area.cv(),(CV*)9,t44.cv(),nullptr,(CV*)9,t43.cv(),nullptr,(CV*)9,t42.cv(),lvl__prop__long.cv(),(CV*)9,t41.cv(),lvt__prop__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t46;
			t46=1==lvl__prop__long.get();
			c.f.fLine=51;
			if (!g->SetValue(ctx,(PCV[]){t46.cv(),lvp__object__layer__locked.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		if (lvl__current__layer.get()!=ltl__layerIDs.arrayElem(li.get()).get()) goto _4;
		{
			Variant t48;
			c.f.fLine=55;
			if (!g->GetValue(ctx,(PCV[]){t48.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t49;
			if (g->OperationOnAny(ctx,7,t48.cv(),K.cv(),t49.cv())) goto _0;
			if (!(t49.get())) goto _5;
		}
		{
			Variant t50;
			c.f.fLine=56;
			if (!g->GetValue(ctx,(PCV[]){t50.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Variant t51;
			if (g->OperationOnAny(ctx,0,t50.cv(),K_20.cv(),t51.cv())) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t51.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
_5:
		{
			Variant t52;
			c.f.fLine=59;
			if (!g->GetValue(ctx,(PCV[]){t52.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Variant t53;
			if (g->OperationOnAny(ctx,0,t52.cv(),K_28.cv(),t53.cv())) goto _0;
			Txt t54;
			if (g->Call(ctx,(PCV[]){t54.cv(),Kaktuelle__ebene.cv()},1,991)) goto _0;
			g->Check(ctx);
			Variant t55;
			if (g->OperationOnAny(ctx,0,t53.cv(),t54.cv(),t55.cv())) goto _0;
			Variant t56;
			if (g->OperationOnAny(ctx,0,t55.cv(),K_29.cv(),t56.cv())) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t56.cv(),lvp__object__layer__name.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
_4:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
