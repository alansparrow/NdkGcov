package com.fuzzyrock;

import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.system.Os;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView mTextView1;

    static {
        try {
            Os.setenv("GCOV_PREFIX", Environment.getExternalStorageDirectory().toURI().getPath() + "coverage_data", true);
            Os.setenv("GCOV_PREFIX_STRIP", "100", true);
            System.loadLibrary("myjni");
        } catch (Exception e)
        {
            e.printStackTrace();
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mTextView1 = (TextView) findViewById(R.id.textView1);

        mTextView1.setText(stringFromJNI());
    }

    //static private native void initCoverage(String path);
    private native String stringFromJNI();
}
