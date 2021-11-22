extern int32_t vvl__hl__objectlist;
extern Txt K_20_28;
extern Txt K_29;
extern Txt Ktoolbar__layer;
extern Txt Kvl__current__area;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETPICTURE;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__OBJECTLIST__LAYER;
extern unsigned char D_proc_PAL__UPDATE__OBJECTLIST[];
void proc_PAL__UPDATE__OBJECTLIST( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__OBJECTLIST);
	if (!ctx->doingAbort) try {
		Long v0;
		Long lvl__anzahl;
		Long v1;
		Long lvl__size;
		Value_array_longint ltl__objects;
		Long v2;
		Long li;
		Long v3;
		Value_array_text ltt__layernames;
		Value_array_longint ltl__objects__selected;
		Value_array_longint ltl__layer;
		Long lvl__current__page;
		Long lvl__area;
		Value_array_longint ltl__layerIDs;
		Txt lvt__text;
		Value_array_longint ltl__group;
		Pic lvb__icon;
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
			Bool t2;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t2.cv(),Var<Long>(ctx,vvl__hl__objectlist).cv()},1,621)) goto _0;
			g->Check(ctx);
			if (!(t2.get())) goto _2;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__objectlist).cv(),Ref((optyp)3).cv()},2,377)) goto _0;
		g->Check(ctx);
_2:
		{
			Long t3;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,375)) goto _0;
			g->Check(ctx);
			Var<Long>(ctx,vvl__hl__objectlist)=t3.get();
			Touch(ctx,vvl__hl__objectlist);
		}
		{
			Long t4;
			t4=lvl__area.get();
			Long t5;
			c.f.fLine=15;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__current__page=t5.get();
		}
		{
			Ref t6;
			t6.setLocalRef(ctx,ltl__objects.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t7;
			t7=lvl__current__page.get();
			Long t8;
			t8=8;
			Long t9;
			t9=lvl__area.get();
			c.f.fLine=18;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,31).cv(),nullptr,t9.cv(),lvl__area.cv(),(CV*)9,t8.cv(),nullptr,(CV*)9,t7.cv(),lvl__current__page.cv(),(CV*)9,ltl__objects.cv(),nullptr,(CV*)65543},4)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,ltl__objects__selected.cv());
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t11;
			t11=1;
			Long t12;
			t12=3;
			Long t13;
			t13=lvl__area.get();
			c.f.fLine=21;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,31).cv(),nullptr,t13.cv(),lvl__area.cv(),(CV*)9,t12.cv(),nullptr,(CV*)9,t11.cv(),nullptr,(CV*)9,ltl__objects__selected.cv(),nullptr,(CV*)65543},4)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t14;
			t14.setLocalRef(ctx,ltl__objects.cv());
			Long t15;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv()},1,274)) goto _0;
			lvl__size=t15.get();
		}
		{
			Ref t16;
			t16.setLocalRef(ctx,ltl__layer.cv());
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),lvl__size.cv()},2,221)) goto _0;
		}
		{
			Ref t17;
			t17.setLocalRef(ctx,ltl__group.cv());
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){nullptr,t17.cv(),lvl__size.cv()},2,221)) goto _0;
		}
		li=1;
		v0=lvl__size.get();
		goto _3;
_4:
		{
			Long t18;
			t18=2;
			Long t19;
			t19=ltl__objects.arrayElem(li.get()).get();
			Long t20;
			t20=lvl__area.get();
			Long t21;
			c.f.fLine=30;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t20.cv(),t19.cv(),t18.cv()},t21.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltl__layer.arrayElem(li.get())=t21.get();
		}
		{
			Long t22;
			t22=3;
			Long t23;
			t23=ltl__objects.arrayElem(li.get()).get();
			Long t24;
			t24=lvl__area.get();
			Long t25;
			c.f.fLine=31;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t24.cv(),t23.cv(),t22.cv()},t25.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltl__group.arrayElem(li.get())=t25.get();
		}
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		{
			Ref t28;
			t28.setLocalRef(ctx,ltl__layerIDs.cv());
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,t28.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t29;
			t29.setLocalRef(ctx,ltt__layernames.cv());
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){nullptr,t29.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t30;
			t30=lvl__area.get();
			c.f.fLine=38;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,24).cv(),nullptr,t30.cv(),lvl__area.cv(),(CV*)9,ltl__layerIDs.cv(),nullptr,(CV*)65543,ltt__layernames.cv(),nullptr,(CV*)65543},3)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t31;
			t31=Ktoolbar__layer.get();
			Pic t32;
			c.f.fLine=40;
			proc_INTERN__GETPICTURE(glob,ctx,1,1,(PCV[]){t31.cv()},t32.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvb__icon=t32.get();
		}
		li=1;
		{
			Ref t33;
			t33.setLocalRef(ctx,ltl__layerIDs.cv());
			Long t34;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t34.cv(),t33.cv()},1,274)) goto _0;
			v2=t34.get();
		}
		goto _5;
_6:
		{
			Long t35;
			t35=ltl__layerIDs.arrayElem(li.get()).get();
			Ref t36;
			t36.setLocalRef(ctx,ltl__layer.cv());
			Long t37;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t37.cv(),t36.cv(),t35.cv()},2,907)) goto _0;
			g->Check(ctx);
			lvl__anzahl=t37.get();
		}
		{
			Txt t38;
			t38=ltt__layernames.arrayElem(li.get()).get();
			lvt__text=t38.get();
		}
		if (0>=lvl__anzahl.get()) goto _7;
		{
			Txt t40;
			g->AddString(lvt__text.get(),K_20_28.get(),t40.get());
			Txt t41;
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){t41.cv(),lvl__anzahl.cv()},1,10)) goto _0;
			Txt t42;
			g->AddString(t40.get(),t41.get(),t42.get());
			g->AddString(t42.get(),K_29.get(),lvt__text.get());
		}
_7:
		{
			Long t44;
			t44=-ltl__layerIDs.arrayElem(li.get()).get();
			Ptr t45;
			t45.adopt(g->CreatePointerLocal(ctx,ltl__objects.cv(),-1,-1));
			Ptr t46;
			t46.adopt(g->CreatePointerLocal(ctx,ltl__layer.cv(),-1,-1));
			Ptr t47;
			t47.adopt(g->CreatePointerLocal(ctx,ltl__group.cv(),-1,-1));
			Ptr t48;
			t48.adopt(g->CreatePointerLocal(ctx,ltl__objects__selected.cv(),-1,-1));
			Long t49;
			t49=0;
			Long t50;
			t50=ltl__layerIDs.arrayElem(li.get()).get();
			Long t51;
			t51=lvl__area.get();
			Long t52;
			c.f.fLine=52;
			proc_PAL__UPDATE__OBJECTLIST__LAYER(glob,ctx,7,7,(PCV[]){t51.cv(),t50.cv(),t49.cv(),t45.cv(),t46.cv(),t47.cv(),t48.cv()},t52.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t53;
			t53=true;
			Bool t54;
			t54=t53.get();
			if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__objectlist).cv(),lvt__text.cv(),t44.cv(),t52.cv(),t54.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t55;
			t55.setLocalRef(ctx,lvb__icon.cv());
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__objectlist).cv(),Long(0).cv(),t55.cv()},3,950)) goto _0;
			g->Check(ctx);
		}
		li=li.get()+1;
_5:
		if (li.get()<=v2.get()) goto _6;
		{
			Ref t58;
			t58.setLocalRef(ctx,ltl__objects__selected.cv());
			Long t59;
			c.f.fLine=58;
			if (g->Call(ctx,(PCV[]){t59.cv(),t58.cv()},1,274)) goto _0;
			if (0>=t59.get()) goto _8;
		}
		c.f.fLine=59;
		if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__objectlist).cv(),Long(1).cv(),Long(0).cv(),Long(18).cv(),Long(1).cv(),Long(1).cv(),Long(0).cv()},7,387)) goto _0;
		g->Check(ctx);
		{
			Ref t61;
			t61.setLocalRef(ctx,ltl__objects__selected.cv());
			Long t62;
			t62=ltl__objects__selected.arrayElem(1).get();
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){nullptr,Var<Long>(ctx,vvl__hl__objectlist).cv(),t62.cv(),t61.cv()},3,630)) goto _0;
			g->Check(ctx);
		}
_8:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
