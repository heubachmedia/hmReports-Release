extern Txt Kvl__current__area;
extern Txt kL4g4euyhRqs;
Asm4d_Proc proc_INTERN__GETOBJECTPROPERTYLONG;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Objectlist_00vl__hl__objectlist[];
void obj_p_PropertyPalette__Objectlist_00vl__hl__objectlist( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Objectlist_00vl__hl__objectlist);
	if (!ctx->doingAbort) try {
		Long v0;
		Value_array_longint ltl__refs;
		Long v1;
		Long li;
		Long lvl__ref;
		Long lvl__layerID;
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (31!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Long t4;
			t4=lvl__area.get();
			Long t5;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,32).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__layerID=t5.get();
		}
		{
			Ref t6;
			t6.setLocalRef(ctx,ltl__refs.cv());
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,ltl__refs.cv());
			Long t8;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t8.cv(),Ref((optyp)3).cv(),kL4g4euyhRqs.cv(),t7.cv(),Ref((optyp)3).cv()},4,379)) goto _0;
			g->Check(ctx);
			lvl__ref=t8.get();
		}
		{
			Ref t9;
			t9.setLocalRef(ctx,ltl__refs.cv());
			Long t10;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,274)) goto _0;
			li=t10.get();
			v0=1;
		}
		goto _3;
_4:
		{
			Long t11;
			t11=2;
			Long t12;
			t12=ltl__refs.arrayElem(li.get()).get();
			Long t13;
			t13=lvl__area.get();
			Long t14;
			c.f.fLine=14;
			proc_INTERN__GETOBJECTPROPERTYLONG(glob,ctx,3,3,(PCV[]){t13.cv(),t12.cv(),t11.cv()},t14.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (t14.get()==lvl__layerID.get()) goto _5;
		}
		{
			Ref t16;
			t16.setLocalRef(ctx,ltl__refs.cv());
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),li.cv()},2,228)) goto _0;
		}
_5:
		li=li.get()+-1;
_3:
		if (li.get()>=v0.get()) goto _4;
		{
			Long t19;
			t19=0;
			Long t20;
			t20=lvl__area.get();
			c.f.fLine=20;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,41).cv(),nullptr,t20.cv(),lvl__area.cv(),(CV*)9,ltl__refs.cv(),nullptr,(CV*)65543,t19.cv(),nullptr,(CV*)9},3)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=22;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2002).cv()},1,1086)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
