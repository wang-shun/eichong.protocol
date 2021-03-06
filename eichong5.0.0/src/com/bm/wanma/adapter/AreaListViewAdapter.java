package com.bm.wanma.adapter;

import java.util.List;

import com.bm.wanma.R;
import com.bm.wanma.entity.AreaBean;
import com.bm.wanma.entity.CityBean;
import com.bm.wanma.entity.ProvinceBean;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

/**
 * @author cm
 * 城市选择，listview适配器
 *
 */
public class AreaListViewAdapter extends BaseAdapter {
	private Context mContext;
	private List<AreaBean> mdata;
	private LayoutInflater inflater;
	private AreaBean bean;
	
	public AreaListViewAdapter(Context context,List<AreaBean> data) {
		this.mContext = context;
		this.mdata = data;
		inflater = LayoutInflater.from(mContext);
	}

	@Override
	public int getCount() {
		return mdata.size();
	}

	@Override
	public Object getItem(int position) {
		return null;
	}

	@Override
	public long getItemId(int position) {
		return position;
	}

	@Override
	public View getView(int position, View convertView, ViewGroup parent) {
		
		TextView tv_name = null;
		if(convertView == null){
			convertView = inflater.inflate(R.layout.listview_area, null);
			tv_name = (TextView)convertView.findViewById(R.id.listview_area_province);
			convertView.setTag(new MyHold(tv_name));
			
		}else {
			MyHold hold = (MyHold) convertView.getTag();
			tv_name = hold.hold_tv_name;
		}
			bean = mdata.get(position);
		if(bean != null){
			tv_name.setText(""+bean.getAREA_NAME());
		}
		
		return convertView;
	}

	private final class MyHold {
		TextView hold_tv_name = null;
		public MyHold(
				TextView tvname){
			this.hold_tv_name = tvname;
		}
	}
	
	
}
