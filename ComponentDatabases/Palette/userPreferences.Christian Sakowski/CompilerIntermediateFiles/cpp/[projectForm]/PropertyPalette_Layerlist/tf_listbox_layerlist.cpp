extern Txt Ktl__layer__id;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
Asm4d_Proc proc_LISTBOX__GETPOSOBJECT;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__LAYERLIST;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00tf__listbox__layerlist[];
void obj_p_PropertyPalette__Layerlist_00tf__listbox__layerlist( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00tf__listbox__layerlist);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__pos;
		Ptr lvp__object__layer__id;
		{
			Long t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (13!=t0.get()) goto _3;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=7;
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
		{
			Ptr t6;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t6.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t6.get();
		}
		{
			Bool t7;
			t7=0<lvl__pos.get();
			Ref t8;
			c.f.fLine=12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t8.cv(),lvp__object__layer__id.cv(),(PCV)-1,nullptr})) goto _0;
			Long t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,274)) goto _0;
			Bool t10;
			t10=lvl__pos.get()<=t9.get();
			if (!( t7.get()&&t10.get())) goto _4;
		}
		{
			Long t12;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),lvp__object__layer__id.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Long t13;
			t13=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,33).cv(),nullptr,t13.cv(),lvl__area.cv(),(CV*)9,t12.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		{
			Long t14;
			t14=lvl__area.get();
			c.f.fLine=16;
			proc_PAL__UPDATE__LAYERLIST(glob,ctx,1,1,(PCV[]){t14.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_4:
		goto _2;
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}