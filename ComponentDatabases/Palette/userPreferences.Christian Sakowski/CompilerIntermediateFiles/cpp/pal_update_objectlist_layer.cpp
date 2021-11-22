extern Txt K_20_28;
extern Txt K_29;
extern Txt Ktoolbar__arc;
extern Txt Ktoolbar__circle;
extern Txt Ktoolbar__group;
extern Txt Ktoolbar__line;
extern Txt Ktoolbar__picture;
extern Txt Ktoolbar__polygon;
extern Txt Ktoolbar__rect;
extern Txt Ktoolbar__text;
extern Txt kBUtzzY1bpu0;
extern Txt kQx7YbdcAA5g;
extern Txt kQyKIZIRsdoQ;
Asm4d_Proc proc_ARR__FIND2INARRAY;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_INTERN__GETOBJECTDESCRIPTION;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_INTERN__GETPICTURE;
Asm4d_Proc proc_PAL__UPDATE__OBJECTLIST__LAYER;
extern unsigned char D_proc_PAL__UPDATE__OBJECTLIST__LAYER[];
void proc_PAL__UPDATE__OBJECTLIST__LAYER( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__OBJECTLIST__LAYER);
	if (!ctx->doingAbort) try {
		Long lvl__groupID;
		Long lvl__anzahl;
		Long lvl__layerID;
		Long lvl__area;
		Ptr lvp__group;
		Value_array_picture ltb__pictures;
		Txt lvt__text;
		Long lvl__typ;
		Ptr lvp__layer;
		Long lvl__hlist;
		Long lvl__pos;
		Value_array_text ltt__picturefilenames;
		Ptr lvp__objects;
		Ptr lvp__objects__selected;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__layerID=Parm<Long>(inParams,inNbParam,2).get();
		lvl__groupID=Parm<Long>(inParams,inNbParam,3).get();
		lvp__objects=Parm<Ptr>(inParams,inNbParam,4).get();
		lvp__layer=Parm<Ptr>(inParams,inNbParam,5).get();
		lvp__group=Parm<Ptr>(inParams,inNbParam,6).get();
		lvp__objects__selected=Parm<Ptr>(inParams,inNbParam,7).get();
		lvl__hlist=0;
		lvl__pos=0;
		{
			Ref t0;
			t0.setLocalRef(ctx,ltt__picturefilenames.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,t0.cv(),Long(10).cv()},2,222)) goto _0;
		}
		{
			Txt t1;
			t1=Ktoolbar__rect.get();
			ltt__picturefilenames.arrayElem(1)=t1.get();
		}
		{
			Txt t2;
			t2=Ktoolbar__text.get();
			ltt__picturefilenames.arrayElem(2)=t2.get();
		}
		{
			Txt t3;
			t3=Ktoolbar__circle.get();
			ltt__picturefilenames.arrayElem(3)=t3.get();
		}
		{
			Txt t4;
			t4=Ktoolbar__line.get();
			ltt__picturefilenames.arrayElem(4)=t4.get();
		}
		{
			Txt t5;
			t5=Ktoolbar__group.get();
			ltt__picturefilenames.arrayElem(5)=t5.get();
		}
		{
			Txt t6;
			t6=Ktoolbar__picture.get();
			ltt__picturefilenames.arrayElem(6)=t6.get();
		}
		{
			Txt t7;
			t7=Ktoolbar__arc.get();
			ltt__picturefilenames.arrayElem(7)=t7.get();
		}
		{
			Txt t8;
			t8=Ktoolbar__polygon.get();
			ltt__picturefilenames.arrayElem(8)=t8.get();
		}
		{
			Txt t9;
			t9=kBUtzzY1bpu0.get();
			ltt__picturefilenames.arrayElem(9)=t9.get();
		}
		{
			Txt t10;
			t10=kQx7YbdcAA5g.get();
			ltt__picturefilenames.arrayElem(10)=t10.get();
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,ltb__pictures.cv());
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),Long(0).cv()},2,279)) goto _0;
		}
		{
			Ptr t12;
			t12.adopt(g->CreatePointerLocal(ctx,ltb__pictures.cv(),-1,-1));
			Long t13;
			t13=10;
			c.f.fLine=30;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t12.cv(),t13.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
		{
			Long t14;
			t14=lvl__pos.get()+1;
			Long t15;
			t15=lvl__groupID.get();
			Long t16;
			t16=lvl__layerID.get();
			Long t17;
			c.f.fLine=34;
			proc_ARR__FIND2INARRAY(glob,ctx,5,5,(PCV[]){lvp__layer.cv(),lvp__group.cv(),t16.cv(),t15.cv(),t14.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos=t17.get();
		}
		if (0>=lvl__pos.get()) goto _3;
		if (0!=lvl__hlist.get()) goto _4;
		{
			Long t20;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,375)) goto _0;
			g->Check(ctx);
			lvl__hlist=t20.get();
		}
_4:
		{
			Variant t21;
			c.f.fLine=42;
			if (!g->GetValue(ctx,(PCV[]){t21.cv(),lvp__group.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t22;
			if (g->OperationOnAny(ctx,6,t21.cv(),lvl__groupID.cv(),t22.cv())) goto _0;
			if (!(t22.get())) goto _5;
		}
		{
			Variant t23;
			c.f.fLine=44;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Ref t24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t24.cv(),lvp__group.cv(),(PCV)-1,nullptr})) goto _0;
			Long t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),t23.cv()},2,907)) goto _0;
			g->Check(ctx);
			lvl__anzahl=t25.get();
		}
		{
			Long t26;
			c.f.fLine=46;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t27;
			t27=lvl__area.get();
			Txt t28;
			proc_INTERN__GETOBJECTDESCRIPTION(glob,ctx,2,2,(PCV[]){t27.cv(),t26.cv()},t28.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__text=t28.get();
		}
		{
			Long t29;
			t29=1;
			Long t30;
			c.f.fLine=47;
			if (!g->GetValue(ctx,(PCV[]){t30.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t31;
			t31=lvl__area.get();
			Long t32;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t31.cv(),t30.cv(),t29.cv()},t32.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__typ=t32.get();
		}
		if (0>=lvl__anzahl.get()) goto _6;
		{
			Txt t34;
			g->AddString(lvt__text.get(),K_20_28.get(),t34.get());
			Txt t35;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t35.cv(),lvl__anzahl.cv()},1,10)) goto _0;
			Txt t36;
			g->AddString(t34.get(),t35.get(),t36.get());
			g->AddString(t36.get(),K_29.get(),lvt__text.get());
		}
_6:
		{
			Long t38;
			c.f.fLine=55;
			if (!g->GetValue(ctx,(PCV[]){t38.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t39;
			t39=lvl__layerID.get();
			Long t40;
			t40=lvl__area.get();
			Long t41;
			proc_PAL__UPDATE__OBJECTLIST__LAYER(glob,ctx,7,7,(PCV[]){t40.cv(),t39.cv(),t38.cv(),lvp__objects.cv(),lvp__layer.cv(),lvp__group.cv(),lvp__objects__selected.cv()},t41.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t42;
			t42=true;
			Bool t43;
			t43=t42.get();
			Variant t44;
			if (!g->GetValue(ctx,(PCV[]){t44.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__hlist.cv(),lvt__text.cv(),t44.cv(),t41.cv(),t43.cv()},5,376)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t45;
			c.f.fLine=56;
			if (!g->GetValue(ctx,(PCV[]){t45.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Txt t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),t45.cv()},1,10)) goto _0;
			Variant t47;
			if (!g->GetValue(ctx,(PCV[]){t47.cv(),lvp__objects.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__hlist.cv(),t47.cv(),kQyKIZIRsdoQ.cv(),t46.cv()},4,986)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t48;
			t48=1<=lvl__typ.get();
			Bool t49;
			t49=10>=lvl__typ.get();
			if (!( t48.get()&&t49.get())) goto _7;
		}
		{
			Pic t51;
			t51=ltb__pictures.arrayElem(lvl__typ.get()).get();
			Long t52;
			c.f.fLine=61;
			if (g->Call(ctx,(PCV[]){t52.cv(),t51.cv()},1,356)) goto _0;
			g->Check(ctx);
			Bool t53;
			t53=0==t52.get();
			if (!(t53.get())) goto _8;
		}
		{
			Txt t54;
			t54=ltt__picturefilenames.arrayElem(lvl__typ.get()).get();
			Txt t55;
			t55=t54.get();
			Pic t56;
			c.f.fLine=63;
			proc_INTERN__GETPICTURE(glob,ctx,1,1,(PCV[]){t55.cv()},t56.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			ltb__pictures.arrayElem(lvl__typ.get())=t56.get();
		}
_8:
		{
			Pic t57;
			t57=ltb__pictures.arrayElem(lvl__typ.get()).get();
			Long t58;
			c.f.fLine=67;
			if (g->Call(ctx,(PCV[]){t58.cv(),t57.cv()},1,356)) goto _0;
			g->Check(ctx);
			Bool t59;
			t59=0<t58.get();
			if (!(t59.get())) goto _9;
		}
		{
			Ref t60;
			t60.setLocalRef(ctx,ltb__pictures.cv());
			t60.setIndice1(lvl__typ.get());
			c.f.fLine=69;
			if (g->Call(ctx,(PCV[]){nullptr,lvl__hlist.cv(),Long(0).cv(),t60.cv()},3,950)) goto _0;
			g->Check(ctx);
		}
_9:
_7:
_5:
_3:
		if (-1!=lvl__pos.get()) goto _2;
		Res<Long>(outResult)=lvl__hlist.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
