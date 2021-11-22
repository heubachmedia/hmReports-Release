extern unsigned char D_proc_STRING__COMPARE[];
void proc_STRING__COMPARE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_STRING__COMPARE);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Bool lvf__OK;
		Long lvl__length;
		Txt lvt__text1;
		Txt lvt__text2;
		new ( outResult) Bool();
		lvt__text1=Parm<Txt>(inParams,inNbParam,1).get();
		lvt__text2=Parm<Txt>(inParams,inNbParam,2).get();
		{
			Bool t0;
			t0=true;
			lvf__OK=t0.get();
		}
		{
			Long t1;
			t1=lvt__text1.get().fLength;
			lvl__length=t1.get();
		}
		{
			Long t2;
			t2=lvt__text2.get().fLength;
			if (lvl__length.get()!=t2.get()) goto _2;
		}
		li=1;
		v0=lvl__length.get();
		goto _3;
_4:
		{
			Txt t4;
			c.f.fLine=22;
			g->GetStringChar(ctx,lvt__text1.get(),(sLONG) li.get(),t4.get());
			Long t5;
			t5=t4.getCharCode();
			Txt t6;
			g->GetStringChar(ctx,lvt__text2.get(),(sLONG) li.get(),t6.get());
			Long t7;
			t7=t6.getCharCode();
			Bool t8;
			t8=t5.get()!=t7.get();
			if (!(t8.get())) goto _5;
		}
		li=lvl__length.get()+1;
		{
			Bool t10;
			t10=false;
			lvf__OK=t10.get();
		}
_5:
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		goto _6;
_2:
		{
			Bool t13;
			t13=false;
			lvf__OK=t13.get();
		}
_6:
		Res<Bool>(outResult)=lvf__OK.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
