extern int32_t vOK;
extern Txt Ktb__layer__color;
extern Txt Ktl__layer__id;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
Asm4d_Proc proc_INTERN__COLOR16BITTO8BIT;
Asm4d_Proc proc_INTERN__COLOR8BITTO16BIT;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__GETCOLORSVG;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00tb__layer__color[];
void obj_p_PropertyPalette__Layerlist_00tb__layer__color( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00tb__layer__color);
	if (!ctx->doingAbort) try {
		Long lvl__object__framecolor__blue;
		Long lvl__object__framecolor__red;
		Long lvl__area;
		Long lvl__object__framecolor__green;
		Ptr lvp__object__layer__color;
		Long lvl__newcolor;
		Long lvl__color;
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
			c.f.fLine=7;
			proc_LISTBOX__GETPOSOBJECT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__pos=t5.get();
		}
		{
			Ptr t6;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t6.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t6.get();
		}
		{
			Ptr t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv(),Long(3).cv(),Ktb__layer__color.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__color=t7.get();
		}
		{
			Bool t8;
			t8=0<lvl__pos.get();
			Ref t9;
			c.f.fLine=12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__object__layer__id.cv(),(PCV)-1,nullptr})) goto _0;
			Long t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,274)) goto _0;
			Bool t11;
			t11=lvl__pos.get()<=t10.get();
			if (!( t8.get()&&t11.get())) goto _3;
		}
		lvl__object__framecolor__red=0;
		lvl__object__framecolor__green=0;
		lvl__object__framecolor__blue=0;
		{
			Long t13;
			t13=lvl__object__framecolor__blue.get();
			Long t14;
			t14=lvl__object__framecolor__green.get();
			Long t15;
			t15=lvl__object__framecolor__red.get();
			Long t16;
			c.f.fLine=17;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t17;
			t17=4;
			Long t18;
			t18=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,27).cv(),nullptr,t18.cv(),lvl__area.cv(),(CV*)9,t17.cv(),nullptr,(CV*)9,t16.cv(),nullptr,(CV*)9,t15.cv(),lvl__object__framecolor__red.cv(),(CV*)9,t14.cv(),lvl__object__framecolor__green.cv(),(CV*)9,t13.cv(),lvl__object__framecolor__blue.cv(),(CV*)9},6)) goto _0;
			g->Check(ctx);
		}
		{
			Long t19;
			t19=lvl__object__framecolor__blue.get();
			Long t20;
			t20=lvl__object__framecolor__green.get();
			Long t21;
			t21=lvl__object__framecolor__red.get();
			Long t22;
			c.f.fLine=19;
			proc_INTERN__COLOR16BITTO8BIT(glob,ctx,3,3,(PCV[]){t21.cv(),t20.cv(),t19.cv()},t22.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__color=t22.get();
		}
		{
			Long t23;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t23.cv(),lvl__color.cv()},1,956)) goto _0;
			g->Check(ctx);
			lvl__newcolor=t23.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _4;
		{
			Ptr t25;
			t25.adopt(g->CreatePointerLocal(ctx,lvl__object__framecolor__red.cv(),-1,-1));
			Ptr t26;
			t26.adopt(g->CreatePointerLocal(ctx,lvl__object__framecolor__green.cv(),-1,-1));
			Ptr t27;
			t27.adopt(g->CreatePointerLocal(ctx,lvl__object__framecolor__blue.cv(),-1,-1));
			Long t28;
			t28=lvl__newcolor.get();
			c.f.fLine=25;
			proc_INTERN__COLOR8BITTO16BIT(glob,ctx,4,4,(PCV[]){t28.cv(),t25.cv(),t26.cv(),t27.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t29;
			t29=lvl__object__framecolor__blue.get();
			Long t30;
			t30=lvl__object__framecolor__green.get();
			Long t31;
			t31=lvl__object__framecolor__red.get();
			Long t32;
			c.f.fLine=27;
			if (!g->GetValue(ctx,(PCV[]){t32.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t33;
			t33=4;
			Long t34;
			t34=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,28).cv(),nullptr,t34.cv(),lvl__area.cv(),(CV*)9,t33.cv(),nullptr,(CV*)9,t32.cv(),nullptr,(CV*)9,t31.cv(),lvl__object__framecolor__red.cv(),(CV*)9,t30.cv(),lvl__object__framecolor__green.cv(),(CV*)9,t29.cv(),lvl__object__framecolor__blue.cv(),(CV*)9},6)) goto _0;
			g->Check(ctx);
		}
		{
			Long t35;
			t35=lvl__newcolor.get();
			Pic t36;
			c.f.fLine=28;
			proc_PAL__GETCOLORSVG(glob,ctx,1,1,(PCV[]){t35.cv()},t36.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t36.cv(),lvp__object__layer__color.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
		}
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
