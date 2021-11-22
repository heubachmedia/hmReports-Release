extern Txt K;
extern Txt Ktf__layer__locked;
extern Txt Ktl__layer__id;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00tf__layer__locked[];
void obj_p_PropertyPalette__Layerlist_00tf__layer__locked( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00tf__layer__locked);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__pos;
		Ptr lvp__object__layer__locked;
		Ptr lvp__object__layer__id;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (20!=t0.get()) goto _2;
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
			if (g->Call(ctx,(PCV[]){t7.cv(),Long(3).cv(),Ktf__layer__locked.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__locked=t7.get();
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
		{
			Variant t13;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),lvp__object__layer__locked.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Num t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv()},1,11)) goto _0;
			Txt t15;
			t15=K.get();
			Long t16;
			t16=(sLONG)lrint(t14.get());
			Long t17;
			t17=3;
			Long t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t19;
			t19=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,25).cv(),nullptr,t19.cv(),lvl__area.cv(),(CV*)9,t18.cv(),nullptr,(CV*)9,t17.cv(),nullptr,(CV*)9,t16.cv(),nullptr,(CV*)9,t15.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
