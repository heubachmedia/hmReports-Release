extern Txt K;
extern unsigned char D_proc_PARSE__GETPAGEPROPERTYLONG[];
void proc_PARSE__GETPAGEPROPERTYLONG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PARSE__GETPAGEPROPERTYLONG);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Long lvl__temp;
		Txt lvt__text;
		Long lvl__page;
		Long lvl__selector;
		new ( outResult) Long();
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__selector=Parm<Long>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=lvl__area.get();
			Long t1;
			c.f.fLine=7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,116).cv(),t1.cv(),t0.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			lvl__page=t1.get();
		}
		lvt__text=K.get();
		lvl__temp=0;
		{
			Txt t2;
			t2=lvt__text.get();
			Long t3;
			t3=lvl__temp.get();
			Long t4;
			t4=lvl__selector.get();
			Long t5;
			t5=lvl__page.get();
			Long t6;
			t6=lvl__area.get();
			c.f.fLine=11;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,137).cv(),nullptr,t6.cv(),lvl__area.cv(),(CV*)9,t5.cv(),lvl__page.cv(),(CV*)9,t4.cv(),lvl__selector.cv(),(CV*)9,t3.cv(),lvl__temp.cv(),(CV*)9,t2.cv(),lvt__text.cv(),(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		Res<Long>(outResult)=lvl__temp.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
