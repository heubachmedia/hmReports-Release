extern Txt K;
extern Txt Ktl__layer__id;
extern Txt Ktt__layer__name;
extern Txt Kvl__current__area;
extern Txt k9zyBXdkYkVM;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATE__LAYERLIST;
extern unsigned char D_obj_p_PropertyPalette__Layerlist_00vl__btn__add[];
void obj_p_PropertyPalette__Layerlist_00vl__btn__add( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Layerlist_00vl__btn__add);
	if (!ctx->doingAbort) try {
		Long lvl__layer__id;
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
			t4=K.get();
			Long t5;
			t5=lvl__area.get();
			Long t6;
			c.f.fLine=8;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,17).cv(),t6.cv(),t5.cv(),lvl__area.cv(),(CV*)9,t4.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
			lvl__layer__id=t6.get();
		}
		{
			Long t7;
			t7=lvl__area.get();
			c.f.fLine=10;
			proc_PAL__UPDATE__LAYERLIST(glob,ctx,1,1,(PCV[]){t7.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t8;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t8.cv(),Long(3).cv(),Ktl__layer__id.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__layer__id=t8.get();
		}
		{
			Ref t9;
			c.f.fLine=14;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lvp__object__layer__id.cv(),(PCV)-1,nullptr})) goto _0;
			Long t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv(),lvl__layer__id.cv()},2,230)) goto _0;
			lvl__pos=t10.get();
		}
		if (0>=lvl__pos.get()) goto _3;
		c.f.fLine=17;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k9zyBXdkYkVM.cv(),lvl__pos.cv()},3,912)) goto _0;
		g->Check(ctx);
		c.f.fLine=18;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),Ktt__layer__name.cv(),lvl__pos.cv()},3,870)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
