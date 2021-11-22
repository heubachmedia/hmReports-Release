extern Txt K;
extern Txt K1_3A_20;
extern Txt K2_3A_20;
extern Txt KGeändert;
extern Txt KMain_2Exlf;
extern Txt K_3A;
extern Txt K_3D;
extern Txt Kfr_2Elproj;
extern Txt kBjcWEQkmNjc;
extern Txt kK6IgJt9M1IY;
Asm4d_Proc proc_STRING__COMPARE;
Asm4d_Proc proc_XLIFF__COMPAREFILES2;
extern unsigned char D_proc_XLIFF__COMPAREFILES[];
void proc_XLIFF__COMPAREFILES( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__COMPAREFILES);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Value_array_text ltt__names1;
		Value_array_text ltt__names2;
		Long v2;
		Long li;
		Value_array_text ltt__contents1;
		Value_array_text ltt__contents2;
		Long v3;
		Long v4;
		Long v5;
		Txt lvt__source1;
		Txt lvt__source2;
		Txt lvt__text;
		Long lvl__pos;
		{
			Txt t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(6).cv()},1,485)) goto _0;
			g->Check(ctx);
			Txt t1;
			g->AddString(t0.get(),Kfr_2Elproj.get(),t1.get());
			Txt t2;
			g->AddString(t1.get(),K_3A.get(),t2.get());
			g->AddString(t2.get(),KMain_2Exlf.get(),lvt__source1.get());
		}
		lvt__source2=kBjcWEQkmNjc.get();
		{
			Ref t4;
			t4.setLocalRef(ctx,ltt__names1.cv());
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){nullptr,t4.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t5;
			t5.setLocalRef(ctx,ltt__contents1.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t6;
			t6.setLocalRef(ctx,ltt__names2.cv());
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,ltt__contents2.cv());
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,t7.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ptr t8;
			t8.adopt(g->CreatePointerLocal(ctx,ltt__names1.cv(),-1,-1));
			Ptr t9;
			t9.adopt(g->CreatePointerLocal(ctx,ltt__contents1.cv(),-1,-1));
			Txt t10;
			t10=lvt__source1.get();
			c.f.fLine=13;
			proc_XLIFF__COMPAREFILES2(glob,ctx,3,3,(PCV[]){t8.cv(),t9.cv(),t10.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ptr t11;
			t11.adopt(g->CreatePointerLocal(ctx,ltt__names2.cv(),-1,-1));
			Ptr t12;
			t12.adopt(g->CreatePointerLocal(ctx,ltt__contents2.cv(),-1,-1));
			Txt t13;
			t13=lvt__source2.get();
			c.f.fLine=14;
			proc_XLIFF__COMPAREFILES2(glob,ctx,3,3,(PCV[]){t11.cv(),t12.cv(),t13.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		lvt__text=K.get();
		{
			Txt t14;
			g->MultiplyString(K_3D.get(),(sLONG)50,t14.get());
			Txt t15;
			g->AddString(lvt__text.get(),t14.get(),t15.get());
			Txt t16;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t16.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t15.get(),t16.get(),lvt__text.get());
		}
		{
			Txt t18;
			g->AddString(lvt__text.get(),kK6IgJt9M1IY.get(),t18.get());
			Txt t19;
			g->AddString(t18.get(),lvt__source1.get(),t19.get());
			Txt t20;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t20.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t19.get(),t20.get(),lvt__text.get());
		}
		{
			Txt t22;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t22.cv(),Long(13).cv()},1,90)) goto _0;
			Txt t23;
			g->AddString(lvt__text.get(),t22.get(),t23.get());
			lvt__text=t23.get();
		}
		li=1;
		{
			Ref t24;
			t24.setLocalRef(ctx,ltt__names2.cv());
			Long t25;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv()},1,274)) goto _0;
			v0=t25.get();
		}
		goto _2;
_3:
		{
			Txt t26;
			t26=ltt__names2.arrayElem(li.get()).get();
			Txt t27;
			t27=t26.get();
			Ref t28;
			t28.setLocalRef(ctx,ltt__names1.cv());
			Long t29;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t29.cv(),t28.cv(),t27.cv()},2,230)) goto _0;
			Bool t30;
			t30=-1==t29.get();
			if (!(t30.get())) goto _4;
		}
		{
			Txt t31;
			t31=ltt__names2.arrayElem(li.get()).get();
			Txt t32;
			g->AddString(lvt__text.get(),t31.get(),t32.get());
			Txt t33;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t33.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t32.get(),t33.get(),lvt__text.get());
		}
_4:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
		{
			Txt t37;
			g->MultiplyString(K_3D.get(),(sLONG)50,t37.get());
			Txt t38;
			g->AddString(lvt__text.get(),t37.get(),t38.get());
			Txt t39;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t39.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t38.get(),t39.get(),lvt__text.get());
		}
		{
			Txt t41;
			g->AddString(lvt__text.get(),kK6IgJt9M1IY.get(),t41.get());
			Txt t42;
			g->AddString(t41.get(),lvt__source2.get(),t42.get());
			Txt t43;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t43.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t42.get(),t43.get(),lvt__text.get());
		}
		{
			Txt t45;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t45.cv(),Long(13).cv()},1,90)) goto _0;
			Txt t46;
			g->AddString(lvt__text.get(),t45.get(),t46.get());
			lvt__text=t46.get();
		}
		li=1;
		{
			Ref t47;
			t47.setLocalRef(ctx,ltt__names1.cv());
			Long t48;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t48.cv(),t47.cv()},1,274)) goto _0;
			v2=t48.get();
		}
		goto _5;
_6:
		{
			Txt t49;
			t49=ltt__names1.arrayElem(li.get()).get();
			Txt t50;
			t50=t49.get();
			Ref t51;
			t51.setLocalRef(ctx,ltt__names2.cv());
			Long t52;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t52.cv(),t51.cv(),t50.cv()},2,230)) goto _0;
			Bool t53;
			t53=-1==t52.get();
			if (!(t53.get())) goto _7;
		}
		{
			Txt t54;
			t54=ltt__names1.arrayElem(li.get()).get();
			Txt t55;
			g->AddString(lvt__text.get(),t54.get(),t55.get());
			Txt t56;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t56.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t55.get(),t56.get(),lvt__text.get());
		}
_7:
		li=li.get()+1;
_5:
		if (li.get()<=v2.get()) goto _6;
		{
			Txt t60;
			g->MultiplyString(K_3D.get(),(sLONG)50,t60.get());
			Txt t61;
			g->AddString(lvt__text.get(),t60.get(),t61.get());
			Txt t62;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t62.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t61.get(),t62.get(),lvt__text.get());
		}
		{
			Txt t64;
			g->AddString(lvt__text.get(),KGeändert.get(),t64.get());
			Txt t65;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t65.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t64.get(),t65.get(),lvt__text.get());
		}
		{
			Txt t67;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t67.cv(),Long(13).cv()},1,90)) goto _0;
			Txt t68;
			g->AddString(lvt__text.get(),t67.get(),t68.get());
			lvt__text=t68.get();
		}
		li=1;
		{
			Ref t69;
			t69.setLocalRef(ctx,ltt__names1.cv());
			Long t70;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t70.cv(),t69.cv()},1,274)) goto _0;
			v4=t70.get();
		}
		goto _8;
_9:
		{
			Txt t71;
			t71=ltt__names1.arrayElem(li.get()).get();
			Txt t72;
			t72=t71.get();
			Ref t73;
			t73.setLocalRef(ctx,ltt__names2.cv());
			Long t74;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t74.cv(),t73.cv(),t72.cv()},2,230)) goto _0;
			lvl__pos=t74.get();
		}
		if (0>=lvl__pos.get()) goto _10;
		{
			Txt t76;
			t76=ltt__contents2.arrayElem(lvl__pos.get()).get();
			Txt t77;
			t77=t76.get();
			Txt t78;
			t78=ltt__contents1.arrayElem(li.get()).get();
			Txt t79;
			t79=t78.get();
			Bool t80;
			c.f.fLine=55;
			proc_STRING__COMPARE(glob,ctx,2,2,(PCV[]){t79.cv(),t77.cv()},t80.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t81;
			t81=t80.get();
			Bool t82;
			t82=!(t81.get());
			if (!(t82.get())) goto _11;
		}
		{
			Txt t83;
			t83=ltt__names1.arrayElem(li.get()).get();
			Txt t84;
			g->AddString(lvt__text.get(),t83.get(),t84.get());
			Txt t85;
			c.f.fLine=57;
			if (g->Call(ctx,(PCV[]){t85.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t84.get(),t85.get(),lvt__text.get());
		}
		{
			Txt t87;
			g->AddString(lvt__text.get(),K1_3A_20.get(),t87.get());
			Txt t88;
			t88=ltt__contents1.arrayElem(li.get()).get();
			Txt t89;
			g->AddString(t87.get(),t88.get(),t89.get());
			Txt t90;
			c.f.fLine=58;
			if (g->Call(ctx,(PCV[]){t90.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t89.get(),t90.get(),lvt__text.get());
		}
		{
			Txt t92;
			g->AddString(lvt__text.get(),K2_3A_20.get(),t92.get());
			Txt t93;
			t93=ltt__contents2.arrayElem(lvl__pos.get()).get();
			Txt t94;
			g->AddString(t92.get(),t93.get(),t94.get());
			Txt t95;
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){t95.cv(),Long(13).cv()},1,90)) goto _0;
			g->AddString(t94.get(),t95.get(),lvt__text.get());
		}
_11:
_10:
		li=li.get()+1;
_8:
		if (li.get()<=v4.get()) goto _9;
		c.f.fLine=67;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__text.cv()},1,523)) goto _0;
		g->Check(ctx);
		c.f.fLine=69;
		if (g->Call(ctx,(PCV[]){nullptr},0,151)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
