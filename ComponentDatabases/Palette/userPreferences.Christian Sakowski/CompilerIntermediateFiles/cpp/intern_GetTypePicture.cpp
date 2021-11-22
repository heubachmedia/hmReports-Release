extern Txt K;
Asm4d_Proc proc_INTERN__GETTYPEPICTUREPATH;
extern unsigned char D_proc_INTERN__GETTYPEPICTURE[];
void proc_INTERN__GETTYPEPICTURE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETTYPEPICTURE);
	if (!ctx->doingAbort) try {
		Pic lvb__bild;
		Txt lvt__path;
		Long lvl__type;
		new ( outResult) Pic();
		lvl__type=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=lvl__type.get();
			Txt t1;
			c.f.fLine=7;
			proc_INTERN__GETTYPEPICTUREPATH(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__path=t1.get();
		}
		{
			Bool t2;
			t2=g->CompareString(ctx,lvt__path.get(),K.get())!=0;
			if (!(t2.get())) goto _2;
		}
		{
			Txt t3;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t3.cv(),Long(6).cv()},1,485)) goto _0;
			g->Check(ctx);
			Txt t4;
			g->AddString(t3.get(),lvt__path.get(),t4.get());
			lvt__path=t4.get();
		}
		{
			Ref t5;
			t5.setLocalRef(ctx,lvb__bild.cv());
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__path.cv(),t5.cv()},2,678)) goto _0;
			g->Check(ctx);
		}
_2:
		Res<Pic>(outResult)=lvb__bild.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
